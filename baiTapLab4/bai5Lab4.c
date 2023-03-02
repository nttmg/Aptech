#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main() {
	int n;
	printf("\t\tMENU");
	printf("---------------");
	printf("\n1. CF");
	printf("\n2. C");
	printf("\n3. HDJ");
	printf("\n4. DreamWeaver");
	printf("\n5. EDBMS");
	printf("\n6. Learn Java By Example");
	printf("\n---------------");
	printf("\nChon: ");
	scanf("%d",&n);
	switch (n) {
		case 1:
			printf("Ban chon CF");
			break;
		case 2:
			printf("Ban chon C");
			break;
		case 3:
			printf("Ban chon HDJ");
			break;
		case 4:
			printf("Ban chon DreamWeaver");
			break;
		case 5:
			printf("Ban chon RDBMS");
			break;
		case 6:
			printf("Ban chon Learn Java By Example");
			break;
		default:
			printf("Ban da chon sai");
	}
	return 0;
}
