#include<stdio.h>
#include<string.h>
int main() {
	char name1[100];
	char name2[100];
	scanf("%s %s",name1,name2);
	if (strcmp(name1,name2) == 0) {
		printf("two people having the same name ");
	}else {
		printf("two people don't have the same name");
	}
	return 0;
}
