require "../../.home.rb"
require "./check.rb"
require "colorize"
str = ""
`touch .ch .DONE .UNDONE .DOING .timestamp`
File.open("./.ch", "r").each_line {|x| str << x.chomp }
puts str
if str.to_i == 1
  puts "Sorry, you already set up your folder! Now clean it up with ./update --clean".red
  raise "Error"
  abort
else
puts "Hey there, fill in your params:", "First goes a type: 'exercise' or 'book' for book sample code", "e.g. 11 exercise"

print "Enter here: "
inp = gets.chomp
inp = inp.split(" ")
type = ""
print "Creating #{inp[0]} templates of type ==> "
if (inp[0] =~ /[0-9]*/) && (inp[1] =~ /[a-z]*/) 
  t = inp[0].to_i
  type = inp[1] 
  if type =~ /ex/
    type = "exe"
  elsif type =~ /b/
    type = "book"
  end
  t.times {|i| File.copy(".code", "#{type}#{i}.c")}
end
print type, "\n"
puts "Creating timestamp...".green
checko = ProgressChecker.new
checko.timestamp
puts "=" *80, "Working well so far...".green
puts "Fixing the details".yellow
`chmod +x update .up.rb`
typus = File.open(".ch", "w")
typus.puts 1 
typus.close
end
puts "Done...".green
