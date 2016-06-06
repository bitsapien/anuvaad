%w(
  codeiya/base
  codeiya/variables
  codeiya/c
).each do |codeiyams|
  begin
    require codeiyams
  rescue LoadError
  end
end