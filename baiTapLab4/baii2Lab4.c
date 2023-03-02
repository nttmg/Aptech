#include<stdio.h>

int main() {
	char n;
	printf("Nhap vao mot chu trong bang Alphabet<A-Z, a-z>: ");
	scanf("%c",&n);
	if (n>=97 && n<=122) {
		printf("Ky tu '%c' la mot chu thuong!",n);
	} else if (n>=65 && n<= 90) {
		printf ("Ky tu '%c' la mot chu hoa!",n);
	} else if (n>=48 && n<=57) {
		printf ("Ky tu '%c' la mot chu so !",n);
	} else {
		printf ("Ky tu '%c' khong nam trong bang Alphabet va khong phai chu so!",n); 
	}
	return 0;
}
