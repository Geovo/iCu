require 'colorize'
 

flags = {'-e' => 'easy', '-m' => 'moderate', '-h' => 'hard'} 
# Now we'll create a new folder for a new challenge:
difficulty = flags[ARGV[0]]
nu = ARGV[1]
# Exit if file exists
def stop_it
  puts "Sorry, this file already exists. Check for typos!"
  exit
end
public :stop_it
puts "#{difficulty}/#{nu}"
stop_it if File.exist?("#{difficulty}/#{nu}")
print "Creating folder:  ".green
`mkdir #{difficulty}/#{nu}`
20.times {print "=="; sleep 0.001}
puts
code = File.expand_path "#{difficulty}/#{nu}/#{nu}.c"
txt = File.expand_path "#{difficulty}/#{nu}/#{nu}.txt"
print "Uploading files:  ".green
`cp .template/solution.c #{code}`
`cp .template/test.txt #{txt} && touch #{difficulty}/#{nu}/NOT_DONE`
#`touch ./#{nu}/run`
`echo "make #{nu} && ./#{nu} #{nu}.txt" > #{difficulty}/#{nu}/run`  
`chmod +x #{difficulty}/#{nu}/run`

#append the files to .gitignore
`echo "#{difficulty}/#{nu}/#{nu}.c" >> .gitignore`
`echo "#{difficulty}/#{nu}/#{nu}.txt" >> .gitignore`
20.times {print "=="; sleep 0.001}
puts
puts "DONE!".red
