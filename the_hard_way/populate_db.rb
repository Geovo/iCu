names = {"Katie" => "katie@me.de", "John" => "hello@world.com", "Pete" => "aiu@yahoo.com", "Dude" => "Bill@the.gates", "Petra" => "girl@home.net", "Wasja" => "wasil@sil.net", "Steve" => "ceo@apple.com"}
i = 1
hobbies = %w(hiking skiing coding banging smiling smoking dancing sports fun party not_giving_a_shit) 
names.each do |k, v|
   3.times do 
   r = Random.new
   p = r.rand(hobbies.size - 1)
   puts "./ex17impr db.dat s #{i} #{k} #{v} #{p} #{hobbies[p]}"
   i += 1
  end
end 
