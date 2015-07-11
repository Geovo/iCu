#!/bin/bash

set -e


#create the database
make ex17impr && ./ex17impr db.dat c

#populate it with fake users
#./populate_db.rb
./ex17impr db.dat s 1 Katie katie@me.de 2 coding
./ex17impr db.dat s 2 Katie katie@me.de 8 fun
./ex17impr db.dat s 3 Katie katie@me.de 2 coding
./ex17impr db.dat s 4 John hello@world.com 8 fun
./ex17impr db.dat s 5 John hello@world.com 0 hiking
./ex17impr db.dat s 6 John hello@world.com 8 fun
./ex17impr db.dat s 7 Pete aiu@yahoo.com 7 sports
./ex17impr db.dat s 8 Pete aiu@yahoo.com 4 smiling
./ex17impr db.dat s 9 Pete aiu@yahoo.com 1 skiing
./ex17impr db.dat s 10 Dude Bill@the.gates 5 smoking
./ex17impr db.dat s 11 Dude Bill@the.gates 8 fun
./ex17impr db.dat s 12 Dude Bill@the.gates 9 party
./ex17impr db.dat s 13 Petra girl@home.net 0 hiking
./ex17impr db.dat s 14 Petra girl@home.net 4 smiling
./ex17impr db.dat s 15 Petra girl@home.net 5 smoking
./ex17impr db.dat s 16 Wasja wasil@sil.net 7 sports
./ex17impr db.dat s 17 Wasja wasil@sil.net 7 sports
./ex17impr db.dat s 18 Wasja wasil@sil.net 1 skiing
./ex17impr db.dat s 19 Steve ceo@apple.com 1 skiing
./ex17impr db.dat s 20 Steve ceo@apple.com 4 smiling
./ex17impr db.dat s 21 Steve ceo@apple.com 3 banging



#list the db
./ex17impr db.dat l

# search for user
# by name
./ex17impr db.dat f Katie

echo
echo
echo

./ex17impr db.dat f John 

echo
echo
echo

./ex17impr db.dat f Pete


#by email
./ex17impr db.dat f "katie@"

echo
echo
echo

./ex17impr db.dat f "john@"
