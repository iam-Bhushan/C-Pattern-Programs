#include <stdio.h>
void main()
{
    int i, j, k, l = 1, m = 2;
    for (i = 1; i <= 4; i++)
    {
        k = l;
        for (j = 1; j <= i; j++)
        {
            printf("%2d ", k);
            k--;
        }
        l = l + m;
        m++;
        printf("\n");
    }
}
