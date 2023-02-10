#include<stdio.h>
int main()
{

    int i,j,n,m;
    scanf("%d",&n);
    int a[n][n];
    int s=0;
    m=n/2;
    printf("%d",m);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
            if(i==m||j==m||i==0&&j<=m||j==n-1&&i<=m||j==0&&i>=m||i==n-1&&j>=m)
            {
                s=s+a[i][j];
            }
        }
    }
    printf("%d",s);
    return 0;
}


