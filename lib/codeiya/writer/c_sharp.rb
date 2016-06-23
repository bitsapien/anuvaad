module Codeiya
	module Writer
		class CSharp
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

					code << "using System;\n"
					code << "namespace Application {\n"
					code << "\tclass #{@name.gsub(' ','').underscore} {\n"
					code << "\t\tpublic static void Main(string[] args) {\n"

					code << "\t\t// input:\n"

					var_input_comment.each do |comment|
						code << "\t\t// #{comment}\n"
					end

					@comments['top'].split("\n").each do |comment|
						code << "\t\t// #{comment}\n"
					end

					# take inputs

					code << "#{variables_define(var_extra)}"

					code << "#{input_lines(var_input_list)}"

					code << "\n\n\t\t// write your code here\n"

					code << "\t\t// store your results in #{var_output_comment}\n"

					@comments['middle'].split("\n").each do |comment|
						code << "\t\t// #{comment}\n"
					end

					code << "\n\t\t// output\n"

					@comments['bottom'].split("\n").each do |comment|
						code << "\t\t// #{comment}\n"
					end

					code << "\t\t// Dummy Data\n"
					code << "#{variables_define(var_output_list)}\n"
					# print outputs

					code << "#{output_lines(var_output_list)}\n"

					code << "\t\t}\t\n"

					code << "\t}\n"

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
					variable_set.each do |vr|
						definition = "#{data_type[vr['type']]}"
						if vr['size1'].empty? && vr['size2'].empty?
							if vr['value'].blank?
								vd << "\t\t#{definition} #{vr['name'].to_s};\n"
							else
								vd << "\t\t#{definition} #{vr['name'].to_s}=#{vr['value']};\n"
							end
						elsif vr['size2'].empty?
							assign = vr['value'].blank? ? "= new #{definition}[#{vr['size1_name']}]" : " = new #{definition}[] #{vr['value'].gsub('[','{').gsub(']','}')}"
							vd << "\t\t#{definition}[] #{vr['name'].to_s}#{assign};\n"
						else
							assign = vr['value'].blank? ? "= new #{definition}[#{vr['size1_name']}][#{vr['size2_name']}]" : "= new #{definition}[][] #{vr['value'].gsub('[','{').gsub(']','}')}"
							vd << "\t\t#{definition}[][] #{vr['name'].to_s}#{assign};\n"
						end
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
					path = File.join('public', namespace, 'C_SHARP')
					unless File.directory? path
						Dir.mkdir(path)
					end
					filename = "#{name.parameterize}.cs"	
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
						input_code << "\t\t#{input_interpreter(one_line)}"
					end
					input_code
				end

				def input_interpreter var_list
					var = var_list[0]
					if var['size1'].empty? && var['size2'].empty?
						if var_list.size.eql? 1
							line = "#{data_type_helper(var['type'])} #{var['name']} = #{parser(var['type'],'Console.ReadLine()')};\n"
						else
							line = "string[] elements = (Console.ReadLine()).Split(\' \');\n"
							var_list.each_with_index do |v,index|
								line << "\t\t#{data_type_helper(v['type'])} #{v['name']} = #{parser(v['type'],"elements[#{index}]")};\n"
							end
						end
					elsif var['size2'].empty?
						tmp_var_name = "#{var['name']}_elements"
						size_limit = var['size1_name'].blank? ? var['size1'] : var['size1_name']
						line = "#{data_type_helper(var['type'])}[] #{var['name']} = new #{data_type_helper(var['type'])}[#{size_limit}];\n"
						line << "\t\tstring[] #{tmp_var_name} = (Console.ReadLine()).Split(\' \');\n"
						line << "\t\tfor(index=0;index<#{var['size1_name']};index++)\n"
						line << "\t\t\t#{var['name']}[index] = #{parser(var['type'],tmp_var_name+'[index]')};\n"	
					else
						tmp_var_name = "#{var['name']}_elements"
						size_limit1 = var['size1_name'].blank? ? var['size1'] : var['size1_name']
						size_limit2 = var['size2_name'].blank? ? var['size2'] : var['size2_name']
						line = "#{data_type_helper(var['type'])}[,] #{var['name']} = new #{data_type_helper(var['type'])}[#{size_limit1},#{size_limit2}];\n"
						line << "\t\tstring[] #{tmp_var_name} = new string[100];\n"
						line << "\t\tfor(idx=0;idx<#{var['size1_name']};idx++){\n"
						line << "\t\t\t#{tmp_var_name} = (Console.ReadLine()).Split(\' \');\n"
						line << "\t\t\tfor(jdx=0;jdx<#{var['size2_name']};jdx++){\n"
						line << "\t\t\t\t#{var['name']}[idx,jdx] = #{parser(var['type'],tmp_var_name+'[jdx]')};\n"
						line << "\t\t\t}\n"
						line << "\t\t}\n"
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

				def parser type, term
					input_parser = {
						'int' => 'Convert.ToInt32',
						'string' => '',
						'char' => '',
						'float' => 'float.Parse',
						'double' => 'Double.Parse'
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
							line = "\t\tConsole.WriteLine(#{var['name']});\n"
						else
							variables = var_list.map do |k| k['name'] end
							line = "\t\tConsole.WriteLine(#{variables.join('+" "+')});\n"
						end
					elsif var['size2'].empty?
						line = "\t\tConsole.WriteLine(string.Join(\" \", #{var['name']}));"
					else
						line = "for(idx=0;idx<#{var['size1_name']};idx++){\n"
						line << "\t\t\tConsole.WriteLine(string.Join(\" \", #{var['name']}[idx]));\n"
						line << "\t\t}"
					end
					line
				end
			end
		end
	end
end