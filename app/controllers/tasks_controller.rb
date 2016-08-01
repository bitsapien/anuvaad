require 'yaml'
require 'json'
require 'fileutils'
require 'zip'
require 'codeiya/all'


class TasksController < ApplicationController
	
  before_action :require_login

  def index
		# get list of folders in public
		# get info on the folders and list
		@tasks = Task.all
		# puts File::Stat.new(@tasks.first).ctime

	end

	def create
		# create task folder
		namespace, time, file_path = create_task_folder params
		# make tracker file
		generate_tracker_file params, namespace, time
    # make a note in table, #TODO: deprecate old method above
    new_task = Task.create(name:                    params[:task_name], 
                           namespace:               namespace, 
                           file:                    file_path,
                           original_filename:       params["question_file"].original_filename, 
                           number_of_questions:     params['number_of_questions'].to_i)
    new_task.save!
		# writing the question file
		File.open(Rails.public_path.join(namespace, namespace+File.extname(params['question_file'].original_filename)), 'wb') do |file|
  			file.write(params['question_file'].read)
		end

		msg = { :message => "Success!" }
		#render :json => msg
    redirect_to :back
	end

	def show
    @task = Task.where(namespace: params['namespace']).first
		@link = "#{params['namespace']}/#{params['namespace']}.pdf"
		@namespace = params['namespace']
    @code_skeletons = CodeSkeleton.where(task: @task)
    @fill_form = CodeSkeleton.where(id: params[:code_skeleton]).first unless params[:code_skeleton].blank?
	end

	def generate_code
		codeiya = Codeiya::Base.new params['name'], params['comments'], params['variables'], params['languages'], params['namespace']
    cs = CodeSkeleton.create(name: params['name'], comments: params['comments'].to_json, variables: params['variables'].to_json, languages_used: params['languages'].to_s, task: Task.where(namespace: params['namespace']).first)
    cs.save!
		redirect_to :back
	end

	def pack
		namespace = params['namespace']
		pack_files namespace
		redirect_to :back
	end

	private 
		def get_list_with_details
			tasks = Dir.entries('public').select {|entry| File.directory? File.join('public',entry) and !(entry =='.' || entry == '..') }
			task_list = []
			tasks.each do |task|
				task_list.push YAML.load_file(File.join(Rails.public_path, task, 'tracker.yml'))
			end
			task_list
		end

		def create_task_folder params
			time = Time.now.utc
			namespace = params["task_name"].downcase.parameterize+'-'+time.to_s.parameterize.gsub('-','').gsub('utc','')
			Dir.mkdir(Rails.public_path.join(namespace))
			Dir.mkdir(Rails.public_path.join(namespace,'all'))
			[namespace, time, Rails.public_path.join(namespace).to_s]		
		end

		def generate_tracker_file params, namespace, time
			tracker = {}
			tracker['number_of_questions'] = params["number_of_questions"]
			tracker['creation_time'] = time
			tracker['original_filename'] = params["question_file"].original_filename
			tracker['namespace'] = namespace
			tracker['name'] = params["task_name"]
			File.open(Rails.public_path.join(namespace, 'tracker.yml'), 'wb') do |file|
				file.write(tracker.to_yaml)
			end	
		end

		def pack_files namespace
			# remove old
			FileUtils.rm_rf("public/#{namespace}/#{namespace}-all")
			FileUtils.rm_rf("public/#{namespace}/all")
			FileUtils.rm_rf("public/#{namespace}/zip")
			FileUtils.mkdir("public/#{namespace}/all")
			FileUtils.mkdir("public/#{namespace}/zip")
			dirs = Dir["public/#{namespace}/*"].map do |e| e if File.directory?(e) end.compact
			dirs.each do |d|
				the_file = "public/#{namespace}/all/#{File.basename(d)}.txt"
				file_contents = ""
				Dir["#{d}/*"].each do |f|
					file_contents << File.read(f)+"\n\n\n\n\n"
				end
				File.open(the_file, 'wb') { |file| file.write(file_contents) }
			end
			# zip_them namespace
		end

		def zip_them namespace
			input_filenames = Dir["public/#{namespace}/all/*.txt"]
			zipfile_name = "public/#{namespace}/#{namespace}-all.zip"
			Zip::File.open(zipfile_name, Zip::File::CREATE) do |zipfile|
	  			input_filenames.each do |filename|
	    			# Two arguments:
	    			# - The name of the file as it will appear in the archive
	    			# - The original file, including the path to find it
	    			zipfile.add(filename, filename)
	  			end
	  			zipfile.get_output_stream("myFile") { |os| os.write "zipping done" }
  			end
		end


		  def task_params
		    params.permit(:task_name, :number_of_questions, :question_file)
		  end

end
