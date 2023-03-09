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