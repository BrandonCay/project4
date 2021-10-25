/*A top secret! == 4120746f702073656372657421 */

/* bn_sample.c */
#include <stdio.h>
#include <openssl/bn.h>
#include "rsaFunctions.h"

#define NBITS 256
void printBN(char *msg, BIGNUM * a)
{
/* Use BN_bn2hex(a) for hex string
* Use BN_bn2dec(a) for decimal string */
char * number_str = BN_bn2hex(a);
printf("%s %s\n", msg, number_str);
OPENSSL_free(number_str);
}

/*

void rsaEncrypt(BIGNUM *, BIGNUM *, BIGNUM *, BIGNUM *);
void rsaDecrypt(BIGNUM *, BIGNUM *, BIGNUM *, BIGNUM *);

*/

int main ()
{

	BIGNUM * M = BN_new();
	BIGNUM * e = BN_new();
	BIGNUM * n = BN_new();
	BIGNUM * d = BN_new();

/*

n = DCBFFE3E51F62E09CE7032E2677A78946A849DC4CDDE3A4D0CB81629242FB1A5
e = 010001 (this hex value equals to decimal 65537)
M = A top secret! = 4120746f702073656372657421
d = 74D806F9F3A62BAE331FFE3F0A68AFE35B3D2E4794148AACBC26AA381CD7D30D
*/
	BN_hex2bn(&n, "DCBFFE3E51F62E09CE7032E2677A78946A849DC4CDDE3A4D0CB81629242FB1A5");
	BN_hex2bn(&e, "010001");
	BN_hex2bn(&M, "4120746f702073656372657421");
	BN_hex2bn(&d, "74D806F9F3A62BAE331FFE3F0A68AFE35B3D2E4794148AACBC26AA381CD7D30D");

	BIGNUM * C = BN_new();

	rsaEncrypt(C, M, e, n);

	printBN("C = " ,C);

	rsaDecrypt(M, C, d, n); 
	
	printBN("M = " ,M);

	return 0;
}
/*

void rsaEncrypt(BIGNUM * C, BIGNUM *M, BIGNUM *e, BIGNUM *n){
	BN_CTX *ctx = BN_CTX_new();
	BN_mod_exp(C, M, e, n, ctx);
}

void rsaDecrypt(BIGNUM * M, BIGNUM *C, BIGNUM *d, BIGNUM *n){
	BN_CTX *ctx = BN_CTX_new();
	BN_mod_exp(M, C, d, n, ctx);
}

*/
