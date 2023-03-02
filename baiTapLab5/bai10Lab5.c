#include<stdio.h>

int main() {
	int n,i;
	int arr[32]; 
	do {
		printf("Nhap mot so nguyen trong khoang 0 den 31: ");
		scanf("%d",&n);
	} while (n>31 || n<0);
	for(i=0;n>0;i++){
		arr[i]=n%2;
		n=n/2;
	}
	printf("\nDang nhi phan cua so nguyen vua nhap la:");
	for(i=i-1;i>=0;i--){
		printf("%d",arr[i]);
	}
	return 0;
}
