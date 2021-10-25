#!/bin/sh
#
#
#start of runTask5.sh

echo "---running task 5---"


cat runTask5.sh

gcc -o task5Out task5.c rsaFunctions.c -lcrypto -Wall

echo "--Run source file"
./task5Out



echo "---end runTask5.sh---"

#end of runTask5.sh
#
#
