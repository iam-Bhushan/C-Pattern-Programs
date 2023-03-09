#include <stdio.h>

void main()
{
    int i, j, sum = 0;
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= 5; j++)
        {
            sum++;
            printf("%3d", sum);
        }
        printf("\n");
    }
}