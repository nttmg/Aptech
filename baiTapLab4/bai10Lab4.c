#include<stdio.h>
#include<math.h>
int main() {
	float doDai;
	printf("Do dai (m): ");
	scanf("%f",&doDai);
	int donViDoi;
	printf("\n1. mm");
	printf("\n2. cm");
	printf("\n3. dm");
	printf("\n4. km");
	printf("\nLua chon don vi doi: ");
	scanf("%d",&donViDoi);
	
	switch(donViDoi) {
		case 1:
			printf("Do dai theo mm la: %f",doDai*10000);
			break;
		case 2:
			printf("Do dai theo cm la: %f",doDai*100);
			break;
		case 3:
			printf("Do dai theo dm la: %f",doDai/100);
			break;
		case 4:
			printf("Do dai theo km la: %f",doDai/10000);
			break;
		default:
			printf("Ban da nhap sai");
	}
	return 0;
}
