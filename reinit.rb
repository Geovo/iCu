#!/usr/bin/ruby

path = File.expand_path("./test/copyfile.rb")
ar = Dir.entries("jizuz") - [".", "..", ".DS_Store"]
Dir.chdir("jizuz")
ar.map do |chapter|
  unless chapter == ".." || chapter == "." 
    Dir.chdir(chapter)
    f = File.open("./.home.rb", "w")
    f.puts "require #{path}"
    f.close
    Dir.chdir("..")
  end
end

