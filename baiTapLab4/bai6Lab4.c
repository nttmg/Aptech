#include<stdio.h>

int main () {
	unsigned int a, b, c;
	printf("Nhap ba canh cua tam giac: ");
	scanf("%d %d %d",&a,&b,&c);
	if (a+b>c&&a+c>b&&b+c>a) {
		if (a*a==b*b+c*c) {
			printf("day la tam giac vuong co canh huyen la %d",a);
		} else if (a*a+c*c == b*b) {
			printf ("day la tam giac vuong co canh huyen la %d",b);
		} else if (c*c== a*a+b*b) {
			printf("day la tam giac vuong co canh huyen la %d",c);
		} else {
			printf ("day khong phai la tam giac vuong ");
		}
		} else {
		printf("Day khong phai ba canh cua mot tam giac!");
	}
	return 0;
} 
