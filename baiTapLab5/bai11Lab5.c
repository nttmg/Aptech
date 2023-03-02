#include<stdio.h>

int main(){
	int n,i;
	int gt = 1;
	scanf("%d",&n);
	for(i=n;i>0;i--){
		gt = gt*i;
	}
	printf("%d",gt);
	return 0;
}
