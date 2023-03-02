#include<stdio.h>

int main() {
    int n,i,j;
    int arr[i];
    scanf("%d", &n);
    for ( i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for ( i = 0; i < n; i++) {
        for ( j = i + 1; j < n; j++) {
            if (arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for ( i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
