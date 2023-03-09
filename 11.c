#include<stdio.h>

void main()
{
    int i, j, sum = 0;
    for(i=1;i<=5;i++)
    {
        for(j=0;j<=5;j++)
        {
            if(j%2==0)
                printf("%2d",i);
            else
                printf("%2d",++sum);
        }
        sum=0;
        printf("\n");
    }
}



/*
1 1 1 2 1 3
2 1 2 2 2 3
3 1 3 2 3 3
4 1 4 2 4 3
5 1 5 2 5 3
*/