#
#
#start of runTask1.sh

echo "---running task 1---"


cat runTask1.sh

gcc -o task1Out task1.c rsaFunctions.c -lcrypto -Wall

echo "--Run source file"
./task1Out

echo "---end runTask1.sh---"

#end of runTask1.sh
#
#

