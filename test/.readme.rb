r = File.open("README", "w")
spl = "=" * 35
r.print spl, "\tREADME\t", spl, "\n"
r.print "Hey there, I built this little tweak to create a folder layout if you are learning some new subject with a lot ofchapters and sections. Feel free to change it. The present layout was built for Dennis M. Richie's book: \"The C Programming language\".\n"

r.print spl, spl, "\n"

r.print "It was designed to have chapters folders and sections for each chapter, where you can write all the sample code provided in the book, as well as an exercise folder for each chapter. Steps you need to do:\n"

r.puts "1. Run './prepare.rb'", "2. Then check out your tree. It will look like this:"  
`./test.rb`
puts `tree jizuz`
