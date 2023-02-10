#include<stdio.h>
int main()
{

    int i,j,n,m;
    printf("n= ");
    scanf("%d",&n);
    printf("m= ");
    scanf("%d",&m);
    int a[n][m];

    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
