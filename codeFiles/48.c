#include <stdio.h>
void main()
{
    int i, j, k = 1,l=1,m;
    for (i = 5; i >= 1; i--)
    {
        m = i;
        for (j = 5; j >= i; j--)
        {
            printf("%2d ", k);
            k = k-m;
            m++;
        }
        l += i;
        k = l;
        printf("\n");
    }
}
