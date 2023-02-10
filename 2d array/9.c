#include<stdio.h>
int main()
{

    int i,j,n;
    scanf("%d",&n);
    int a[n][n];
    int s=0;

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
            if(i==0||i==n||i==j||j==(n-i-1))
            {
                s=s+a[i][j];
            }
        }
    }
    printf("%d",s);
    return 0;
}

