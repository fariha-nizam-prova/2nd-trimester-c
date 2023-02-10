#include<stdio.h>
int main()
{
    int i,j,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(i==1&&j<=(n+1)/2||j==1&&i>=(n+1)/2||i==n&&j>=(n+1)/2||j==n&&i<=(n+1)/2||j==(n+1)/2||i==(n+1)/2)
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

