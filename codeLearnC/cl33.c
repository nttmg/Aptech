#include<stdio.h>

int main() {
	int score;
	scanf("%d",&score);
	if (score>=0 && score<=10) {
		printf("the score is valid");
	} else {
		printf("the score is not valid");
	}
	return 0;
}
