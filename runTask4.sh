#!/bin/sh
#
#
#start of runTask4.sh

echo "---running task 4---"


cat runTask4.sh

gcc -o task4Out task4.c rsaFunctions.c -lcrypto -Wall

echo "--Run source file"
./task4Out



echo "---end runTask4.sh---"

#end of runTask4.sh
#
#
