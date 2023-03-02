#include<stdio.h>

int main() {
	char kt;
	scanf("%c",&kt);
	if (kt>=65&&kt<=90||kt>=97&&kt<=122) {
		printf("Ky tu vua nhap la chu cai!");
	} else if( kt>=48&&kt<=57) {
		printf("Ky tu vua nhap la chu so");
	} else if(kt!=32) {
		printf("Ky tu vua nhap la ky tu dac biet");
	}
	return 0;
} 
