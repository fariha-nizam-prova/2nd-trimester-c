#include<stdio.h>
int main()
{
    int i,j,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d",j);
        }
        for(j=1;j<=2*n-1;j++)
        {
            if(j>i && j<(2*n)-i)
            {
                printf(" ");
            }
        }
        for(j=i;j>0;j--)
        {
           if(j!=n)
           {
                printf("%d",j);
           }
        }
        printf("\n");
    }
    return 0;
}
