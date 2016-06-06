require 'yaml'
require 'json'
require 'fileutils'
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
		@link = "#{params['namespace']}/#{params['namespace']}.docx"
		@namespace = params['namespace']
	end

	def generate_code
		codeiya = Codeiya::Base.new params['name'], params['comments'], params['variables'], params['languages'], params['namespace']
	end

	private 
		def write_code languages
			languages.each do |lang, required|
				if required
					manager lang
				end
			end
		end

		def manager lang
			case lang
			when 'c'
				c_writer
			when 'c_plus_plus'
			when 'c_sharp'
			when 'javascript'
			when 'python'
			end
		end

		def c_writer
			path = File.join('public', @namespace, 'C')
			unless File.directory? path
				Dir.mkdir(path)
			end
			filename = "#{@name.parameterize}.c"
			code = "// Name : #{@name}\n"
			code << "#include <stdio.h>\nint main() {\n"
			code << "\t// input:\n"
			@comments['top'].split("\n").each do |comment|
				code << "\t// #{comment}\n"
			end
			
			# variables

			var_input_list = variable_aggregate @variables["input"]
			var_output_list = variable_aggregate @variables["output"]
			var_extra = variable_aggregate @variables["extra"]

			# data types
			data_type = {
				'int' => 'int',
				'string' => 'char',
				'float' => 'float',
				'double' => 'double'
			}
			
			((var_input_list+var_output_list+var_extra).group_by {|d| d['type']}).each do |d_t,d|
				definition = "#{data_type[d_t]} "
				list = []
				d.each do |vr|
					if vr['size1'].empty? && vr['size2'].empty?
						if vr['value'].blank?
							list.push vr['name'].to_s
						else
							list.push "#{vr['name'].to_s}=#{vr['value']}" if vr['type'].in? ['int', 'float', 'double']
							list.push "#{vr['name'].to_s}=\'#{vr['value']}\'" if vr['type'].in? ['char', 'string']
						end
					elsif vr['size2'].empty?
						list.push "#{vr['name'].to_s}[#{vr['size1']}]"
					else
						list.push "#{vr['name'].to_s}[#{vr['size1']}][#{vr['size2']}]"
					end
				end
				code << "\t#{definition}#{list.join(', ')};\n"
			end

			code << "#{input_lines(var_input_list)}"

			code << "\n\n\t// write your code here\n"

			@comments['middle'].split("\n").each do |comment|
				code << "\t// #{comment}\n"
			end

			code << "\n\t// output\n"

			@comments['bottom'].split("\n").each do |comment|
				code << "\t// #{comment}\n"
			end

			code << "#{output_lines(var_output_list)}"

			code << "\treturn 0;"

			code << "\n}"
			
			File.open(File.join(path, filename), 'wb') { |file| file.write(code) }

		end

		def variable_aggregate variables
			list = []
			x = 0
			y = 0
			variables.split("\n").each do |variable_string|
				variable_string.split(' ').each do |var|
					variable = /<(\w+)>(\w+)\[?(\d*)(\w*)\]?\[?(\d*)(\w*)\]?\(?(\w*)\)?/.match(var)
					type = variable[1]
					name = variable[2]
					size_1 = variable[3]
					size_1_name = variable[4]
					size_2 = variable[5]
					size_2_name = variable[6]
					value = variable[7]
					details = {}
					details['name'] = name
					details['type'] = type
					details['size1'] = size_1
					details['size2'] = size_2
					details['size1_name'] = size_1_name
					details['size2_name'] = size_2_name
					details['x'] = x
					details['y'] = y
					details['value'] = value
	 				list.push details
	 				y = y + 1
				end
				x = x + 1
			end
			puts list.inspect
			list
		end

		def input_lines input_list
			# detect positions
			input_code = ''
			x = input_list.map do |ex| ex['x'] end
			number_of_lines = x.max + 1
			number_of_lines.times do |idx|
				index = idx - 1
				one_line = (input_list.map do |n| n if n['x']==idx end).compact
				input_code << input_interpreter(one_line)
			end
			input_code
		end

		def input_interpreter sublist
			access_specifier_mappings = {
				'char' => '%c',
				'int' => '%d',
				'string' => '%s',
				'float' => '%f'
			}
			access_specifier_string = []
			input_variables_string = []
			sublist.each do |one|
				if one['size1'].blank? && one['size2'].blank?
					access_specifier_string.push access_specifier_mappings[one['type']]
					input_variables_string.push "&#{one['name']}"
					code = "\tscanf(\"#{access_specifier_string.join(' ')}\", #{input_variables_string.join(', ')});\n"
				elsif one['size2'].blank?

				else
					
				end
			end
			code
		end

		def output_lines output_list
			# detect positions
			output_code = ''
			x = output_list.map do |ex| ex['x'] end
			number_of_lines = x.max + 1
			number_of_lines.times do |idx|
				index = idx - 1
				one_line = (output_list.map do |n| n if n['x']==idx end).compact
				output_code << output_interpreter(one_line)
			end
			output_code
		end

		def output_interpreter sublist
			access_specifier_mappings = {
				'char' => '%c',
				'int' => '%d',
				'string' => '%s',
				'float' => '%f'
			}
			access_specifier_string = []
			output_variables_string = []
			sublist.each do |one|
				if one['size1'].blank? && one['size2'].blank?
					access_specifier_string.push access_specifier_mappings[one['type']]
					output_variables_string.push "#{one['name']}"
				elsif one['size2'].blank?

				else

				end
			end
			"\tprintf(\"#{access_specifier_string.join(' ')}\", #{output_variables_string.join(', ')});\n"
		end

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


		  def task_params
		    params.permit(:task_name, :number_of_questions, :question_file)
		  end

end
