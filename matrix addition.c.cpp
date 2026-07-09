// Bushra Junaid Deshmukh 
// 2503033111372028
#include<stdio.h>

int main()
{
    int a[3][3] = {
        {5, 6, 7},
        {8, 9, 10},
        {11, 12, 13}
    };

    int b[3][3] = {
        {2, 4, 6},
        {8, 10, 11},
        {13, 15, 17}
    };

    int c[3][3];
    int i, j;

    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
            printf("%d\t", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}