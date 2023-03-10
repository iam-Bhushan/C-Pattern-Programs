#include <stdio.h>

void main()
{
    int i, j, k;
    for (i = 65; i <= 69; i++)
    {
        k = i;
        for (j = 65; j <= 69; j++)
        {
            printf("%c ", k);
            k += 5;
        }
        printf("\n");
    }
}