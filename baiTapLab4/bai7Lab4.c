#include<stdio.h>

 int main() {
	int num1, num2;
	printf("Nhap vao 2 so: ");
	scanf("%d %d",&num1,&num2);
	if (num1%num2== 0) {
		printf("%d la uoc cua %d ",num2,num1);
	} else if (num2%num1==0) {
		printf("%d la uoc cua %d ",num1,num2);
	} else {
		printf("khong co so nao la uoc cua nhau!");
	}
	return 0;
}
