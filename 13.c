#include <stdio.h>

void main()
{
    int i, j, k, l = 10, m = 10;
    for (i = 1; i <= 5; i++)
    {
        k = i;
        for (j = 1; j <= 5; j++)
        {
            if (j % 2 == 1)
            {
                printf("%3d", k);
                k += 10;
            }
            else
            {
                printf("%3d", l);
                l += 10;
            }
        }
        l = --m;
        printf("\n");
    }
}
