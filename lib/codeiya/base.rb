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
			when 'c_plus_plus'
			when 'c_sharp'
			when 'javascript'
			when 'python'
			end
		end
	end
end
