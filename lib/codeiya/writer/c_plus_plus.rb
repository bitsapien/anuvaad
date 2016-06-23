module Codeiya
	module Writer
		class CPlusPlus
			class << self
				def write data
					@name = data['name']
					@comments =  data['comments']
					@variables =  data['variables']
					@namespace =  data['namespace']
					the_file = create_files data['name'], data['namespace']

					var_input_list = Codeiya::Variables.aggregate @variables["input"]
					var_output_list = Codeiya::Variables.aggregate @variables["output"]


					var_extra_raw = create_extra_variables_if_needed(var_input_list+var_output_list)

					var_extra = Codeiya::Variables.aggregate var_extra_raw


					var_input_comment = Codeiya::Variables.input_comments(var_input_list)
					var_output_comment = Codeiya::Variables.output_comments(var_output_list)

					code = "// Name : #{@name}\n"

					code << "#include <iostream>\n"
					code << "#include <string>\n"
					code << "using namespace std;\n"
					code << "\n"
					code << "int main(int argc, char const *argv[]) {\n"

					code << "\t// input:\n"

					var_input_comment.each do |comment|
						code << "\t// #{comment}\n"
					end

					@comments['top'].split("\n").each do |comment|
						code << "\t// #{comment}\n"
					end

					# take inputs

					code << "\t#{variables_define(var_extra)}"

					code << "#{input_lines(var_input_list)}"

					code << "\n\n\t// write your code here\n"

					code << "\t// store your results in #{var_output_comment}\n"

					@comments['middle'].split("\n").each do |comment|
						code << "\t// #{comment}\n"
					end

					code << "\n\t// output\n"

					code << "\t// Dummy Data\n"

					code << "\t#{variables_define(var_output_list)}\n"

					@comments['bottom'].split("\n").each do |comment|
						code << "\t// #{comment}\n"
					end

					# print outputs

					code << "#{output_lines(var_output_list)}\n"

					code << "}"


					File.open(the_file, 'wb') { |file| file.write(code) }

				end

				def variables_define variable_set
					data_type = {
						'int' => 'int',
						'string' => 'string',
						'char' => 'char',
						'float' => 'float',
						'double' => 'double'
					}
					vd = ''
					(variable_set.group_by {|d| d['type']}).each do |d_t,d|
						definition = "#{data_type[d_t]} "
						list = []
						d.each do |vr|
							name =  vr['name']
							if vr['size1'].empty? && vr['size2'].empty?
								if vr['value'].blank?
									list.push name.to_s
								else
									list.push "#{name.to_s}=#{vr['value']}"
								end
							elsif vr['size2'].empty?
								assign = vr['value'].blank? ? "" : "=#{vr['value'].gsub('[','{').gsub(']','}')}"
								list.push "#{name.to_s}[#{vr['size1']}]#{assign}"
							else
								assign = vr['value'].blank? ? "" : "=#{vr['value'].gsub('[','{').gsub(']','}')}"
								list.push "#{name.to_s}[#{vr['size1']}][#{vr['size2']}]#{assign}"
							end
						end
						vd << "#{definition}#{list.join(', ')};\n"
					end
					vd
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
					tmp_extra = @variables['extra'].split('^')
					(extra+tmp_extra).uniq.join('^')

				end

				def create_files name, namespace
					path = File.join('public', namespace, 'C_PLUS_PLUS')
					unless File.directory? path
						Dir.mkdir(path)
					end
					filename = "#{name.parameterize}.cpp"	
					File.join(path,filename)			
				end


				def input_lines input_list
					# detect positions
					input_code = ""
					x = input_list.map do |ex| ex['x'] end
					number_of_lines = x.max + 1
					number_of_lines.times do |idx|
						index = idx - 1
						one_line = (input_list.map do |n| n if n['x']==idx end).compact
						input_code << "\t#{input_interpreter(one_line)}"
					end
					input_code
				end

				def input_interpreter var_list
					var = var_list[0]
					if var['size1'].empty? && var['size2'].empty?
						if var_list.size.eql? 1
							line = "#{variables_define([var])}"
							line << "\tcin >> #{var['name']};\n"
						else
							line = "#{variables_define(var_list)}\n"
							vin_list = var_list.map do |v| v['name'] end
							line << "\tcin >> #{vin_list.join(' >> ')};\n"
						end
					elsif var['size2'].empty?
						line = "#{variables_define([var])}\n"
						line << "\tfor(index=0;index<#{var['size1_name']};index++)\n"
						line << "\t\tcin >> #{var['name']}[index];\n"
					else
						line = "#{variables_define([var])}\n"
						line << "\tfor(idx=0;idx<#{var['size1_name']};idx++)\n"
						line << "\t\tfor(jdx=0;jdx<#{var['size2_name']};jdx++)\n"
						line << "\t\t\tcin >> #{var['name']}[idx][jdx];\n"
					end
					line
				end

				def data_type_helper type
					types = {
						'int' => 'int',
						'string' => 'string',
						'char' => 'char',
						'float' => 'float',
						'double' => 'double'
					}
					types[type]
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
							line = "\tcout << #{var['name']} << endl;\n"
						else
							variables = var_list.map do |k| k['name'] end
							line = "\tcout << #{variables.join(' << ')} << endl;\n"
						end
					elsif var['size2'].empty?
						line = "\tfor(index=0;index<#{var['size1_name']};index++)\n"
						line << "\t\tcout << #{var['name']}[index] << \" \";\n"
					else
						line = "\tfor(idx=0;idx<#{var['size1_name']};idx++) {\n"
						line << "\t\tfor(jdx=0;jdx<#{var['size2_name']};jdx++) {\n"
						line << "\t\t\tcout << #{var['name']}[idx][jdx];\n"
						line << "\t\t}\n"
						line << "\t\tcout << endl;\n"
						line << "\t}\n"
					end
					line
				end
			end
		end
	end
end