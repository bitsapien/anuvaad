module Codeiya
	module Variables
		def self.aggregate variables
			list = []
			x = 0
			y = 0
			# <int>n[400m][300d](4000)
			variables.split(",").each do |variable_string|
				variable_string.split(' ').each do |var|
					variable = /<(\w+)>(\w+)\[?(\d*)(\w*)\]?\[?(\d*)(\w*)\]?\(?(\w*)\)?/.match(var)
					puts '#'*90
					puts variable.inspect
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
	end
end