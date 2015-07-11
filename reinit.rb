#!/usr/bin/ruby

path = File.expand_path("./test/copyfile.rb")
Dir.chdir("jizuz")
f = File.open("./.home.rb", "w")
f.puts "require #{path}"
f.close
Dir.chdir("..")

