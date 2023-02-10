#include<stdio.h>
int main()
{
    int i,j,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            printf("  ");
        }
        for(j=1;j<=(n-i);j++)
        {
            printf("  ");
        }
        for(j=1;j<(2*i);j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    for(i=1;i<=n+1;i++)
    {
        for(j=1;j<=n;j++)
        {
            printf("  ");
        }
        for(j=1;j<(2*n);j++)
        {
            if(j==2||j==(2*n-2)||i==n||i==n+1)
            {
                printf("= ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }


    return 0;
}

