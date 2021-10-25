
#include "rsaFunctions.h"

#include <stdio.h>
#include <openssl/bn.h>
#define NBITS 128

void printBN(char *msg, BIGNUM * a)
{
/* Use BN_bn2hex(a) for hex string
* Use BN_bn2dec(a) for decimal string */
char * number_str = BN_bn2hex(a);
printf("%s %s\n", msg, number_str);
OPENSSL_free(number_str);
}


int main ()
{
//n = p * q
	BIGNUM *n = BN_new();
	BIGNUM *p = BN_new();
	BIGNUM *q = BN_new();

	BN_hex2bn(&p,"F7E75FDC469067FFDC4E847C51F452DF");
	BN_hex2bn(&q,"E85CED54AF57E53E092113E62F436F4F");

	printBN("p = ", p);
	printBN("q = ", q);
	calcN(n,p,q);
	printBN("p * q = ", n);
//oSlashed = (p-1)(q-1)
	BIGNUM *oSlashed = BN_new();
	calcOslashed(oSlashed, p, q);
	printBN("oSlashed = ", oSlashed);

//pick e
	BIGNUM *e = BN_new();
	BN_hex2bn(&e,"0D88C3");
	printBN("e = " , e);
//d = e^(-1)mod (oSlashed)
	BIGNUM *d = BN_new();
	calcD(d,e, oSlashed);
	printBN("d = ",d);
	
	
	return 0;
}

