#include <stdio.h>

void main()
{
    int i, j, k = 0;
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= 5; j++)
        {
            k = i * j;
            printf("%3d", k);
        }
        printf("\n");
    }
}