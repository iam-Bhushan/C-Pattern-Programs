#include <stdio.h>

void main()
{
    int i, j, k;
    for (i = 5; i >= 1; i--)
    {
        k = 2;
        for (j = 5; j >= i; j--)
        {
            printf("%d ", k);
            k += 2;
        }
        printf("\n");
    }
}