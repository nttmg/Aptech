#include<stdio.h>

int main() {
	int num;
	do {
		scanf("%d",&num);
		num++;
		printf("%d",num);
	}
	while (num>=0&&num<100);
	return 0;
}
