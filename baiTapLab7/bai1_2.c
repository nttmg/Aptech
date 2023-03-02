#include<stdio.h>
#include<conio.h>

int main() {
	int arr[100];
	int n,i,j;
	int temp;
	printf("Enter number of elements: ");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("Enter elements %d: ",i+1);
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++){
		temp=arr[i];
		j=i-1;
		while(j>=0&&temp<arr[j]){
			arr[j+1] = arr[j];
			j--;
		}
		arr[j+1]=temp;
	}
	printf("\nHien thi Mang da duoc sap xep:\n");
	for(i=0;i<n;i++){
		printf("%d\t",arr[i]);
	}
	return 0;
}
