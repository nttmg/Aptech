#include<stdio.h>
#include<string.h>
int main() {
	char s[100];
	scanf("%s",s);
	int i;
	for (i=0;i<strlen(s);i++) {
		if (s[i]>='A' && s[i]<='Z') {
			s[i]+=32;
		}
	}
	printf("%s",s);
	return 0;
}
