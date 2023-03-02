#include<stdio.h>

int main() {
	char chr;
	printf("nhap ky tu Alphabet: ");
	scanf("%c",&chr);
	if (chr >= 65 && chr<= 90 || chr >= 97&&chr<=122) {
		switch (chr) {
			case 'A':
				printf("Ky tu %c la nguyen am",chr);
		        break;
		    case 'E': 
		        printf("Ky tu %c la nguyen am ",chr );
		        break;
		    case 'I':
				printf("Ky tu %c la nguyen am",chr);
		        break;
		    case 'O':
				printf("Ky tu %c la nguyen am",chr);
		        break;
		    case 'U':
				printf("Ky tu %c la nguyen am",chr);
		        break;
		    case 'a':
				printf("Ky tu %c la nguyen am",chr);
		        break;
		    case 'e':
				printf("Ky tu %c la nguyen am",chr);
		        break;
		    case 'i':
				printf("Ky tu %c la nguyen am",chr);
		        break;
		    case 'o':
				printf("Ky tu %c la nguyen am",chr);
		        break;
		    case 'u':
				printf("Ky tu %c la nguyen am",chr);
		        break;
		    default :
		    	printf ("Ky tu %c la mot phu am",chr);
	    }
		} else {
			printf ("Ky tu khong thuoc bang chu cai");
		}
	return 0;
}
