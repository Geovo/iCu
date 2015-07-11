filesp = "/Users/pentahack/shareUNIXs/C-learning"
$tofile = "/Users/pentahack/shareUNIXs/iCu/the_hard_way"

files = [] 
Dir.entries(filesp).map {|code| files << code if code =~ /ex.+\.c/} 
p files
def find_folder(filename)
  str = ""
  filename.each_char {|c| str << c if c =~ /[0-9]/}
  newpath = $tofile + "/exercise#{str}/ex#{str}.c"
  return newpath
end
public :find_folder

files.map {|f| `cp #{filesp}/#{f} #{find_folder(f)}` unless find_folder(f).nil?}
files.map {|x| puts x, find_folder(x)}
