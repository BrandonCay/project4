echo "---running task 6---"


cat task6Step4.sh

gcc -o task6Step4Out task6Step4.c rsaFunctions.c -lcrypto -Wall

echo "--Run source file"
./task6Step4Out


echo "---end runTask6.sh---"

#e
#
#
