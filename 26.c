#include<stdio.h>
/*
void main()
{
    int i, j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            switch(i)
            {
                case 1:
                    printf("A ");
                break;
                case 2:
                    printf("B ");
                break;
                case 3:
                    printf("C ");
                break;
                case 4:
                    printf("D ");
                break;
                case 5:
                    printf("E ");
                break;
            }
        }
        printf("\n");
    }
}
*/
void main()
{
    int i,j;
    for(i='A';i<='E';i++)
    {
        for(j='A';j<='E';j++)
        {
            printf("%c ",i);
        }
        printf("\n");
    }
}