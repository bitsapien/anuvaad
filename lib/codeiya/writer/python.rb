module Codeiya
	module Writer
		class Python
			class << self
				def write data
					@name = data['name']
					@comments =  data['comments']
					@variables =  data['variables']
					@namespace =  data['namespace']
					the_file = create_files data['name'], data['namespace']

					var_input_list = Codeiya::Variables.aggregate @variables["input"]
					var_output_list = Codeiya::Variables.aggregate @variables["output"]


					var_extra = Codeiya::Variables.aggregate @variables['extra']

					var_input_comment = Codeiya::Variables.input_comments(var_input_list)
					var_output_comment = Codeiya::Variables.output_comments(var_output_list)

					code = "#!/usr/bin/python\n"

					code << "# Name : #{@name}\n"

					code << "# input:\n"

					var_input_comment.each do |comment|
						code << "# #{comment}\n"
					end

					@comments['top'].split("\n").each do |comment|
						code << "# #{comment}\n"
					end

					# take inputs

					code << "#{variables_define(var_extra)}"

					code << "#{input_lines(var_input_list)}"

					code << "\n\n# write your code here\n"

					code << "# store your results in #{var_output_comment}\n"

					@comments['middle'].split("\n").each do |comment|
						code << "# #{comment}\n"
					end

					code << "\n# output\n"


					code << "\n# Dummy Data\n"

					code << "#{create_data_assignments(var_output_list)}\n"

					@comments['bottom'].split("\n").each do |comment|
						code << "# #{comment}\n"
					end

					# print outputs

					code << "#{output_lines(var_output_list)}"


					File.open(the_file, 'wb') { |file| file.write(code) }

				end

				def variables_define var_list
					var_names = var_list.map do |v| "#{v['name']} = #{var['value']}" end
					"#{var_names.join(',')}\n" unless var_names.blank?
				end

				def create_extra_variables_if_needed var_list 
					extra = []
					var_list.each do |var|
						if var['size1'].blank? & var['size2'].blank?
						elsif var['size2'].blank?
							extra.push '<int>index'
						else
							extra.push '<int>idx'
							extra.push '<int>jdx'
						end
					end
					tmp_extra = @variables['extra'].split(',')
					(extra+tmp_extra).join(',')

				end

				def create_data_assignments list 
					out = ""
					list.each do |v|
						out << "#{v['name']} = #{v['value']}\n"
						# value = eval(v['value'])
						# case value.class
						# when Array
						# 	out << "#{var['name']} = #{value}"
						# when Float
						# 	out << "#{var['name']} = #{value}"
						# when Fixnum
						# 	out << "#{var['name']} = #{value}"
						# when String
						# 	out << "#{var['name']} = #{value}"
						# end
					end
					out
				end
				def create_files name, namespace
					path = File.join('public', namespace, 'PYTHON')
					unless File.directory? path
						Dir.mkdir(path)
					end
					filename = "#{name.parameterize}.py"	
					File.join(path,filename)			
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

				def input_interpreter var_list
					var = var_list[0]
					if var['size1'].empty? && var['size2'].empty?
						if var_list.size.eql? 1
							line = "#{var['name']} = #{parser(var['type'],'raw_input().strip()')}\n"
						else
							line = "elements = raw_input().strip().split(' ')\n"
							var_list.each_with_index do |v,index|
								line << "#{v['name']} = #{parser(v['type'],"elements[#{index}]")}\n"
							end
						end
					elsif var['size2'].empty?
						tmp_var_name = "#{var['name']}_elements"
						line = "#{tmp_var_name} = raw_input().strip().split(' ')\n"
						line << "#{var['name']} = #{mapper(var['type'],tmp_var_name)}\n"	
					else
						tmp_var_name = "#{var['name']}_elements"
						line = "#{var['name']} = []\n"
						line << "for _ in xrange(#{var['size1_name']}):\n"
						line << "\t#{tmp_var_name} = raw_input().strip().split(' ')\n"
						line << "\t#{var['name']}.append(#{mapper(var['type'],tmp_var_name)})\n"
					end
					line
				end

				def mapper type, term
					input_parser = {
						'int' => 'int',
						'string' => '',
						'char' => '',
						'float' => 'float',
						'double' => 'float'
					}
					input_parser[type].blank? ? term : "map(#{input_parser[type]}, #{term})"
				end

				def parser type, term
					input_parser = {
						'int' => 'int',
						'string' => '',
						'char' => '',
						'float' => 'float',
						'double' => 'float'
					}
					input_parser[type].blank? ? term : "#{input_parser[type]}(#{term})" 
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

				def output_interpreter var_list
					var = var_list[0]
					if var['size1'].empty? && var['size2'].empty?
						if var_list.size.eql? 1
							line = "print(#{var['name']})\n"
						else
							variables = var_list.map do |k| "str(#{k['name']})" end
							line = "print(#{variables.join('+" "+')})\n"
						end
					elsif var['size2'].empty?
						line = "print(\" \".join(str(e) for e in #{var['name']}))"
					else
						line = "for idx in xrange(#{var['size1_name']}):\n"
						line = "\tprint(\" \".join(str(e) for e in #{var['name']}[idx]))"
					end
					line
				end
			end
		end
	end
end