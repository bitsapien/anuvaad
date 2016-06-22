module Codeiya
	module Variables
		def self.aggregate variables
			list = []
			x = 0
			y = 0
			# a b
			# c d
			# ====
			# <int>a,<int>b|<int>c,<int>d
			#  <int>n[33{n}][33{m}]"jjfjf fjfj fjfj4 5j"=[[1,2],[4,5]]
			variables.split("|").each do |variable_string|
				variable_string.split('^').each do |var|
					variable = /<(\w+)>(\w+)\[?(\d*)\{?(\w*)\}?\]?\[?(\d*)\{?(\w*)\}?\]?\"?([a-zA-Z0-9_'’ ]*)\"?\=?(.*)\)?/.match(var)
					type = variable[1]
					name = variable[2]
					size_1 = variable[3]
					size_1_name = variable[4]
					size_2 = variable[5]
					size_2_name = variable[6]
					comment = variable[7]
					value = variable[8]
					raise "Type cannot be blank" if type.blank?
					raise "Name cannot be blank" if name.blank?
					details = {}
					details['name'] = name
					details['type'] = type
					details['size1'] = size_1
					details['size2'] = size_2
					details['size1_name'] = size_1_name
					details['size2_name'] = size_2_name
					details['x'] = x
					details['y'] = y
					details['value'] = value.to_s
					details['comment'] = comment
					details['set'] = false
	 				list.push details
	 				y = y + 1
				end
				x = x + 1
			end
			list			
		end

		def self.input_comments var
			var_input_comment_list = []
			var.each do |var| var_input_comment_list.push("#{var['name']} : #{var['comment']}") end
			var_input_comment_list
		end

		def self.output_comments varlist
			varlist.map do |v| "`#{v['name']}`" end.join(',')
		end
	end
end