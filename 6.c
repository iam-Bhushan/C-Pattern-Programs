#include <stdio.h>

/*
void main()
{
    int i, j, sum = -1;
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= 5; j++)
        {
            sum += 2;
            printf("%3d", sum);
        }
        printf("\n");
    }
}

*/
void main()
{
    int i, j, sum = 1;
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= 5; j++)
        {
            printf("%3d", sum);
            sum += 2;
        }
        printf("\n");
    }
}