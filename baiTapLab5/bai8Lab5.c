#include<stdio.h>

int main() {
	unsigned int N;
	int min,max,i;
	scanf("%d",&N);
	printf("Nhap vao %d so:\n",N);
	int arr[N];
	for(i=0;i<N;i++) {
		scanf("%d",&arr[i]);
	}
	max = arr[0];
	for(i=1;i<N;i++) {
		if(arr[i]>max) {
			max = arr[i];
		}
	} 
	printf("Max = %d",max);
	min= arr[0];
	for(i=1;i<N;i++) {
		if(arr[i]<min) {
			min = arr[i];
		}
	}
	printf("\nMin = %d",min);
	return 0;
}

