#!/usr/bin/ruby
require "./copyfile.rb"

main = {"ch1" => 10,
"ch2" => 12, 
"ch3" => 8, 
"ch4" => 11, 
"ch5" => 12, 
"ch6" => 9, 
"ch7" => 8, 
"ch8" => 7}
    
  def home_dump
    f = File.open("./skeletons/.home.rb", "w")
    f.puts "require '#{Dir.pwd}/copyfile.rb'"
    f.close
  end

  public :home_dump
  home_dump
filos = (Dir.entries("skeletons") - [".", ".."]).flatten
fold = Dir.entries("skeletons") - [".", ".."] - filos
# create a class Layout

class Layout
  def initialize(hash, home, where=".", files, fold)
    @hash = hash
    @where = File.expand_path(where)
    @home = @where + "/#{home}"
    @files = @fold = {}
    crehash(files, @files)
    crehash(fold, @fold)
  end
 
  def crehash(ary, where, path="./skeletons/")
    ary.flatten.map {|x| where[x] = File.expand_path("#{path}#{x}")} 
  end
  
  def dump_home
    f = File.open(".home.rb", "w")
    f.puts "require '#{@home}/copyfile.rb'"
    f.close
  end

 
  def home_dir
    Dir.mkdir(@home) 
    Dir.chdir(@home)
    draw_tree
  end

  def ex_fold
    Dir.mkdir("exercises")
    Dir.chdir("exercises")
     @fold.each {|k, v| File.copy(v, k)}
    Dir.chdir("..")
  end

  def draw_tree
    @hash.each do |k, v|
    # first, create a direction like ch1
    Dir.mkdir(k)
    # then change to it
    Dir.chdir(k) #program is now in e.g. ch1
    # now we create an 'exercise' folder
    ex_fold 
    dump_home
    # create a respective amount of section folders
    i = 1
    while i < v do 
      Dir.mkdir("section#{i}")
      Dir.chdir("section#{i}")
	# here it is in e.g. section1 folder
      @files.each {|k, v| File.copy(v, k)}  
      Dir.chdir("..")# go back to ch1 folder 
      i += 1
    end # end of while loop
      #!!!!!!!!Get out of ch1 folder
      Dir.chdir(@home)
    end # finish the '@hash.each' loop 
  end # end of method 'draw_tree'
end # done with the class

path = ".."
fpat = File.expand_path(path)
`rm -r #{fpat}/jizuz` unless !File.exist?("#{fpat}/jizuz")
p lay = Layout.new(main, "jizuz", path, filos, fold)
lay.home_dir
