// Bushra Junaid Deshmukh 
// 2503033111372028
#include <stdio.h>

int main() {
    int a[10], i, n;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Even numbers are:\n");
    for(i = 0; i < n; i++) {
        if(a[i] % 2 == 0) {
            printf("%d ", a[i]);
        }
    }

    printf("\nOdd numbers are:\n");
    for(i = 0; i < n; i++) {
        if(a[i] % 2 != 0) {
            printf("%d ", a[i]);
        }
    }

    return 0;
}