#include <stdio.h>

void main()
{
    int i, j;
    int k, l = 6, m = 6;
    for (i = 5; i >= 1; i--)
    {
        k = i;
        for (j = 1; j <= 5; j++)
        {
            if (j % 2 != 0)
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
        l = ++m;
        printf("\n");
    }
}
