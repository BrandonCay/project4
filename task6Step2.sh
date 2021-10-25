declare arr=(c0 c1 c2)


for i in "${arr[@]}"
do
   read -p "Enter any key to see 'n' "

   openssl x509 -in $i.pem -noout -modulus
	
   read -p "Enter any key to find 'e' "

   openssl x509 -in $i.pem -text -noout

   echo

done

