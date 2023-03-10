#include <stdio.h>
/* //Way 1
void main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            if(j%2==1)
                printf("0 ");
            else
                printf("1 ");
        }
        printf("\n");
    }
}
*/
//Way 2
void main()
{
    int i,j;
    for(i=0;i<=4;i++)
    {
        for(j=0;j<=4;j++)
        {
            if(j%2==1)
                printf("%d ",j%2);
            else
                printf("%d ",j%2);
        }
        printf("\n");
    }
}
