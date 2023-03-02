#include<stdio.h>
#include<math.h>
 int main() {
 	float a, b, c; 
 	printf("Nhap 3 so a,b,c: ");
	scanf("%f %f %f",&a,&b,&c);
	if (a==0) {
		if (b==0) {
			if (c==0) {
				printf ("Phuong trinh vo so nghiem");
			} else {
				printf("Phuong trinh vo nghiem");
			}
		} else {
			printf ("Phuong trinh co nghiem duy nhat %f",-c/b);
		}
	} else {
		float dt;
		dt = b*b-4*a*c;
		if (dt<0) {
			printf("Phuong trinh vo nghiem!");
		} else if (dt==0) {
			printf("Phuong trinh co nghiem kep la %f",-b/(2*a));
		} else {
			printf("Phuong trinh co hai nghiem phan biet la: %f",(-b+sqrt(dt))/(2*a),(-b-sqrt(dt))/(2*a));
		}
	}
	 return 0;
 } 
