#include<stdio.h>
int main(){
    int n; 
    do 
    {
        printf("chieu cao cua tam giac: ");
        scanf("%d",&n);
    }while(n<0);
    int i=1;
	int j=1;
    while( i <= n)
    {
        while( j <= i)
        {
            printf("*");
			j++;            
        }
        printf("\n");
        i++;
    }
    return 0;
}
