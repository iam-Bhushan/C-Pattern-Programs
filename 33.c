#include <stdio.h>

void main()
{
    int i, j, k;
    for (i = 69; i >= 65; i--)
    {
        k = i;
        for (j = 69; j >= 65; j--)
        {
            printf("%c ", k);
            k += 5;
        }
        printf("\n");
    }
}

/*
E J O T Y
D I N S X
C H M R W
B G L Q V
A F K P U
*/