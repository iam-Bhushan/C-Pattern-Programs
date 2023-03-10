#include <stdio.h>

void main()
{
    int i, j;
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= 5; j++)
        {
            if (i % 2 == 1 && j % 2 == 1)
                printf("1 ");
            else if (i % 2 == 1 && j % 2 == 0)
                printf("0 ");
            else if (i % 2 == 0 && j % 2 == 1)
                printf("0 ");
            else
                printf("1 ");
        }
        printf("\n");
    }
}

/*
1 0 1 0 1
0 1 0 1 0
1 0 1 0 1
0 1 0 1 0
1 0 1 0 1
*/