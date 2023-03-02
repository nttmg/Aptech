#include<stdio.h>

int main () {
	char arr[50];
	printf("Nhap chuoi ky tu:");
	scanf("%s",&arr);
	printf("Chuoi ky tu vua nhap: %s\n",arr);
	
	int i,j,temp;
	int n = strlen(arr);
	for (i=0;i<n-1;i++) {
		for(j=i+1;j<n;j++){
		    if(arr[i]>arr[j]){
		    	temp=arr[i];
			    arr[i]=arr[j];
			    arr[j]=temp;
			}
		}
	}
	printf("\nChuoi ky tu sau khi sap xep: %s\n",arr);
	
	int low =0, high=n,mid;
	char kyTu,timThay=0;
	printf("Nhap ky tu can tim: ");
	fflush(stdin);
	scanf("%c",&kyTu);
	while(low<=high){
		mid=(low+high)/2;
		if(arr[mid]== kyTu){
			printf("\nKy tu %c duoc tim thay o vi tri %d cua chuoi!",kyTu,mid+1);
			timThay=1;
			break;
		} else if(arr[mid]>kyTu){
			high=mid-1;
		} else {
			low=mid+1;
		}
	}
	if(timThay==0){
		printf("Ky tu %c not found",kyTu);
	}
	return 0;
}
