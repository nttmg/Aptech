#include<stdio.h>
#include<math.h>
int main() {
	float num1, num2;
	char n;
	scanf("%c",&n);
	printf("Nhap so thu nhat: ");
	scanf("%f",&num1);
	printf("Nhap so thu hai: ");
	scanf("%f",&num2);
	printf("         MENU       ");
	printf("\n==================");
	printf("\n+");
	printf("\n-");
	printf("\nx");
	printf("\n:");
	printf("\n==================");
	printf("\nChon: ");
	switch (n) {
		case'+':
			printf("Cong: %f + %f = %f",num1,num2,num1+num2);
			break;
		case'-':
			printf("Tru: %f + %f = %f",num1,num2,num1-num2);
			break;
		case'x':
			printf("Nhan: %f x %f = %f",num1,num2,num1*num2);
			break;
		case':':
			printf("Thuong: %f : %f = %f",num1,num2,num1/num2);
			break;
		default:
			printf("Ban da nhap sai");
	}
	return 0;
}
