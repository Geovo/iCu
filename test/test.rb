#!/usr/bin/ruby

`rm -r jizuz` unless !File.exist?("../jizuz")
`./prepare.rb`
puts "Done..."
