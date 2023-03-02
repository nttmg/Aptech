#include<stdio.h>

int main() {
	int N,i;
	char tiepTuc;
	do {
		scanf("%d",&N);
		if(N>=1&&N<=9) {
			printf("\n %d x 1 = %d",N,N*1);
			printf("\n %d x 2 = %d",N,N*2);
			printf("\n %d x 3 = %d",N,N*3);
			printf("\n %d x 4 = %d",N,N*4);
			printf("\n %d x 5 = %d",N,N*5);
			printf("\n %d x 6 = %d",N,N*6);
			printf("\n %d x 7 = %d",N,N*7);
			printf("\n %d x 8 = %d",N,N*8);
			printf("\n %d x 9 = %d",N,N*9);
			printf("\ntiep tuc khong?\nY?\nN?");
		} else {
			printf("Hay nhap tu 1 den 9");
		}
		scanf("%c",&tiepTuc);
	} while (tiepTuc!=78);
	return 0;
}
