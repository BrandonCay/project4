
declare arr=(c0 c1 c2)


for i in "${arr[@]}"
do
	read -p "Enter key to see then find signature field for file:${i}"
	openssl x509 -in $i.pem -text -noout
done


