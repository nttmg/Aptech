#include<stdio.h>

int main() {
	int i,n;
	int sum=0;
	scanf("%d", &n);
	for(i=1; i<= n; i++) {
		if (i%2 == 1) { 
		sum+= i;
		}
	} 
	printf("%d", sum);
	return 0; 
} 
