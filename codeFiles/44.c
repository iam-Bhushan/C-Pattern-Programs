#include <stdio.h>
/*
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
*/
/*
void main()
{
    int i, j, k=0,l;
    for (i = 1; i <= 4; i++)
    {
        k += i;
        l = k;
        for (j = 1; j <= i; j++)
        {
            printf("%2d ", l);
            l--;
        }
        printf("\n");
    }
}
*/
void main()
{
    int i, j, k=0;
    for (i = 1; i <= 4; i++)
    {
        k += i;
        for (j = k; j > (k - i) ; j--)
        {
            printf("%2d ", j);
        }
        printf("\n");
    }
}

