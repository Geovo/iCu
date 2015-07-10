#!/usr/bin/ruby

class File
  def self.copy(f1, f2)
    f = File.open(f1, "r") if File.exist?(f1)
    cpto = File.open(f2, "w")
    f.each_line {|line| cpto << line }
  end
end

#test = File.copy("f1.txt", "testfile")
