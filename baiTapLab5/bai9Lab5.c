#include<stdio.h>

int main() {
	int N,i;
	int arr[N];
	do {
		printf("Nhap so nguyen duong: ");
		scanf("%d",&N);
	} while (N<=0);
	printf("Uoc so cua so nguyen duong %d\n",N);
	for (i=1;i<=N;i++){
		if(N%i==0) {
			printf("%d, ",i);
		}
	}
	return 0;
}
