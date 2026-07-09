// Bushra Junaid Deshmukh 
// 2503033111372028
#include <stdio.h>

int main()
{
    int pin;

    printf("Enter ATM PIN: ");
    scanf("%d", &pin);

    if (pin == 1234)
    {
        printf("PIN is correct. Access Granted.");
    }
    else
    {
        printf("Incorrect PIN. Access Denied.");
    }

    return 0;
}