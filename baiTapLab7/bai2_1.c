#include<stdio.h>
#include<stdio.h>

int main() {
	int arr[100];
	int n=0;
	int x;
	
	while(1){
		printf("Enter element number %d: ",n+1);
		scanf("%d",&arr[n]);
		if(arr[n]== 0){
			break;
		} else {
			n++;
		}
	}
	int i;
	printf("Entered elements: \n");
	for(i=0;i<n;i++) {
		printf("%d",arr[i]);
	}
	printf("\nEnter elementfor searching: ");
	scanf("%d",&x);
	int j;
	for (j=0;j<n;j++){
		if(x== arr[j]){
			break;
		}
	}
	if(j==n){
		printf("Number %d not found",x);
	} else {
		printf("Number %d found at position %d",x,j);
	}
	getch();
	return 0;
}
