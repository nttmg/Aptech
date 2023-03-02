#include<stdio.h>

int main() {
	int i,n;
	scanf("%d", &n);
	int arr[i];
	int sum = 0;
	for (i=0;i<n;i++) {
		scanf("%d",&arr[i]);
	}
	for (i=0;i<n;i++) {
		if (arr[i] % 2!=0 && arr[i] >0) {
			sum+= arr[i];
		}
	}
	printf("%d", sum);
	return 0;
}
