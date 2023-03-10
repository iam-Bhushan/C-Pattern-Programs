#include <stdio.h>

void main()
{
    int i, j, k;
    for (i = 5; i >= 1; i--)
    {
        k = i;
        for (j = 1; j <= 5; j++)
        {
            printf("%3d", k);
            k += 5;
        }
        printf("\n");
    }
}