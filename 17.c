#include <stdio.h>

void main()
{
    int i, j;
    int k = 1, l = 1;
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= 5; j++)
        {
            printf("%3d", k);
            k += 2;
        }
        l += 2;
        k = l;
        printf("\n");
    }
}