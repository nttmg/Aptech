#include<stdio.h>

int main() {
	unsigned int a;
	int i,sotachra;
	int sum=0;
	scanf("%d",&a);
	for (i=0;i<=a;i++) {
		sotachra=a%10;
		a=a/10;
		sum+= sotachra;
	}
	printf("%d",sum);
	return 0;
}
