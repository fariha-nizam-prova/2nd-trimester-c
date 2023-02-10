#include<stdio.h>
int main()
{
    int i,j,n,m;
    scanf("%d",&n);
    m=(n+1)/2;
    for(i=1;i<=m;i++)
    {
        for(j=1;j<=n;j++)
        {
           if(i==m&&j==1||j==i&&i>=(m-m/2)||j==n+1-i&&i>=(m-m/2)||j==m+1-i&&j>=(m-m/2)||i>=(m-m/2)&&j==m-1+i)
           {
                printf("* ");
           }
           else
           {
                printf("  ");
           }
        }
           printf("\n");
    }
        for(i=1;i<m;i++)
        {
            for(j=1;j<=n;j++)
            {
                if(j==i+1&&i<=m/2||j==m-i&&j>m/2||j==m+i&&i<=m/2||j==n-i&&i>=m/2)
                {
                    printf("* ");
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

