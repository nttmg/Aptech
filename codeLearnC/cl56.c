#include<stdio.h>

int main() {
	int i, n, k;
	scanf("%d",&n);
	int arr[1000];
	for (i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	scanf("%d", &k);
	
	int count = 0;
	for ( i=0; i<n;i++) {
		if (arr[i] == k) {
			count++;
		}
	}
	printf("trong mang co %d phan tu co gia tri bang %d",count,k);
	return 0;
}
