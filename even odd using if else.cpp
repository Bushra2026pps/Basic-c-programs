// Bushra Junaid Deshmukh 
// 2503033111372028
#include <stdio.h>

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num % 2 == 0) {
        printf("%d is an Even number.", num);
    }
    else {
        printf("%d is an Odd number.", num);
    }

    return 0;
}