module Codeiya
	class Base
		def initialize name, comments, variables, languages, namespace

			@packed_data = {
				'name' => name, 
				'comments' => comments, 
				'variables' => variables, 
				'namespace' => namespace
			}
			write_code languages
		end

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
				Codeiya::Writer::C.write @packed_data
			when 'java'
				Codeiya::Writer::Java.write @packed_data
			when 'c_plus_plus'
				Codeiya::Writer::CPlusPlus.write @packed_data
			when 'c_sharp'
				Codeiya::Writer::CSharp.write @packed_data
			when 'javascript'
				Codeiya::Writer::Javascript.write @packed_data
			when 'python'
				Codeiya::Writer::Python.write @packed_data
			end
		end
	end
end
