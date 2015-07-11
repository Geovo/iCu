#!/usr/bin/ruby
require "colorize"
class ProgressChecker
  def initialize(path=".")
    @path = File.expand_path(path)
    @code = []
    @clean_them = [".ch", "setup.rb", ".code"] 
    Dir.entries(".").map {|x| @code << x if x =~ /.+\.c/}
    @code.sort!
    @start = Time.now
    @done, @undone, @doing = [], [], [] 
    @statuses = {}
    @sep = ("=" * 40).green
    check_statuses
    actions = ["-f", "-s", "-i", "-a", "-l", "--clean"]
    action = actions.index(ARGV[0])
    if ARGV.size > 0 
      case action 
        when 0 
	  sort_them
    	  filing
	when 1 
	  sort_them
	when 2 
	  puts "Number 2"
	  sort_them
	  filing
	  show_all(".UNDONE", ".DONE", ".DOING")
	  puts @sep, ""
        when 3
	  puts "Ok, here is your info:".yellow
	  sort_them
	  filing
	  show_all(".UNDONE", ".DONE", ".DOING")
	  prog_rate
	  puts @sep, ""
	when 4
	when 5
	  puts "Let me just clean up this mess :)"
  	  clean_up(@clean_them)
      end
    end
  end

  def sort_stat(string, status) 
    @statuses.each {|k, v| status << k if v.include?(string)} 
  end

  def show_all(*list)
    list.each {|l| File.open(l).each_line {|line| print line}}
  end
  
  def sort_them
    sort_stat("UNDONE", @undone)
    sort_stat("FINISHED", @done)
    sort_stat("DOING", @doing)
  end

  def clean_up(ary)
    ary.each {|x| `rm #{x}`}
  end

  def filing 
    out_to_file(@undone, ".UNDONE", "undone")
    out_to_file(@done, ".DONE", "done")
    out_to_file(@doing, ".DOING", "in progress", "\nDon't worry too much, but try to finish these\n")
  end

  def timestamp
    timo = File.open(".timestamp", "w")
    timo.puts @start
    timo.close
  end

  def prog_rate
    t = get_time 
    diff = (Time.now - t)/3600
    print "Time working on this branch:  ",diff , " hours\n".blue
    puts "Progress rate: #{@done.size / diff} tasks done per hour".yellow
  end

  def get_time
    t = ""
    File.open(".timestamp", "r").each_line do |line|
       start = line.chomp.split(" ")
       st = start[0].split("-").map(&:to_i)
       ar = start[1].split(":").map(&:to_i)
       t = Time.new(st[0], st[1], st[2], ar[0], ar[1], ar[2])
    end
    return t
  end

  def check_statuses
    @code.map do |fname|
      cf = File.open(fname, "r")
      cf.each_line {|line| @statuses[fname] = line.chomp if line =~ /\/\|\\PROGRESS\: /}
    end
  end

  def out_to_file(data, file, status, custom="")
    outf = File.open(file, "w")
    outf.puts "YOU HAVE #{data.size} files #{status}. #{custom}".green
    data.map {|str| outf.puts str.blue}
    outf.close
  end

end

prog = ProgressChecker.new
