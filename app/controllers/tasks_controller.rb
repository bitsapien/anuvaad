require 'yaml'
require 'json'
require 'fileutils'
require 'zip'
require 'codeiya/all'


class TasksController < ApplicationController
	def index
		# get list of folders in public
		# get info on the folders and list
		@tasks = get_list_with_details
		# puts File::Stat.new(@tasks.first).ctime

	end

	def create
		# create task folder
		namespace, time = create_task_folder params
		# make tracker file
		generate_tracker_file params, namespace, time

		# writing the question file
		File.open(Rails.public_path.join(namespace, namespace+File.extname(params['question_file'].original_filename)), 'wb') do |file|
  			file.write(params['question_file'].read)
		end

		msg = { :message => "Success!" }
		render :json => msg
	end

	def show
		@link = "#{params['namespace']}/#{params['namespace']}.pdf"
		@namespace = params['namespace']
	end

	def generate_code
		codeiya = Codeiya::Base.new params['name'], params['comments'], params['variables'], params['languages'], params['namespace']
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
			[namespace, time]		
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
			dirs = Dir["public/#{namespace}/*"].map do |e| e if File.directory?(e) end.compact
			dirs.each do |d|
				the_file = "public/#{namespace}/all/#{File.basename(d)}.txt"
				file_contents = ""
				Dir["#{d}/*"].each do |f|
					file_contents << File.read(f)+"\n\n\n\n\n"
				end
				File.open(the_file, 'wb') { |file| file.write(file_contents) }
			end
			zip_them namespace
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
