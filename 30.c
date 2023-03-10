#include <stdio.h>

void main()
{
    int i, j, num = 65;
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= 5; j++)
        {
            printf("%c ", num++);
        }
        printf("\n");
    }
}
