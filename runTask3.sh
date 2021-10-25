#!/bin/sh
#
#
#start of runTask3.sh

echo "---running task 3---"


cat runTask3.sh

gcc -o task3Out task3.c rsaFunctions.c -lcrypto -Wall

echo "--Run source file"
./task3Out


echo "---end runTask3.sh---"

#end of runTask3.sh
#
#


