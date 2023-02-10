
#include<stdio.h>
int main()
{
    int i,j,n;
    scanf("%d",&n);
    for(i=1;i<=(n+1)/2;i++)
    {
        for(j=1;j<=n;j++)
        {
         if(j>((n+1)/2-i) && j< ((n+1)/2+i))
         {
             printf("*");
         }
         else
         {
             printf(" ");
         }
        }

        printf("\n");
    }
    for(i=1;i<(n+1)/2;i++)
    {
        for(j=1;j<=n;j++)
        {
         if(j>i && j<=(n-i))
         {
             printf("*");
         }
         else
         {
             printf(" ");
         }
        }

        printf("\n");
    }
    return 0;
}
