require 'colorize'
 

# Now we'll create a new folder for a new challenge:
difficulty = ARGV[0]
nu = ARGV[1]

# Exit if file exists
def stop_it
  puts "Sorry, this file already exists. Check for typos!"
  exit
end

public :stop_it

puts "#{difficulty}_lesson/#{nu}"
stop_it if File.exist?("#{difficulty}_lesson/#{nu}")

print "Creating folder:  ".green
`mkdir #{difficulty}_lesson/#{nu}`
20.times {print "=="; sleep 0.001}
puts

# set the paths
code = File.expand_path "#{difficulty}_lesson/#{nu}/#{nu}.c"
txt = File.expand_path "#{difficulty}_lesson/#{nu}/#{nu}.txt"

# show a message to the user
print "Uploading files:  ".green
`cp .template/solution.c #{code}`
`cp .template/test.txt #{txt} && touch #{difficulty}_lesson/#{nu}/NOT_DONE`
#`touch ./#{nu}/run`

`echo "make #{nu} && ./#{nu}" > #{difficulty}_lesson/#{nu}/run`  
`chmod +x #{difficulty}_lesson/#{nu}/run`

#append the files to .gitignore
#`echo "#{difficulty}/#{nu}/#{nu}.c" >> .gitignore`
#`echo "#{difficulty}/#{nu}/#{nu}.txt" >> .gitignore`
20.times {print "=="; sleep 0.001}
puts

puts "DONE!".red
