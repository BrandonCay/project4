echo "---runTask2 start---"
#---runTask2.sh start
cat runTask2.sh

gcc -o task2Out task2.c rsaFunctions.c -lcrypto -Wall

./task2Out

echo "---runTask2 end---"
#---runTask2.sh end
