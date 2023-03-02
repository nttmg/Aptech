#include<stdio.h>
#include<string.h>
int main() {
	char s[100];
	char c;
	scanf("%c",&c);
	scanf("%s",s);
	int count = 0;
	int len = strlen(s);
	int i;
	for (i=0;i<len;i++) {
		if (s[i] == c) {
			count++;
		}
	}
	printf("%d", count);
	return 0;
}
