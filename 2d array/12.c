#include<stdio.h>
int main()
{

    int i,j,n,m,t;
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
        for(j=0;j<m/2;j++)
        {
           t=a[i][j];
           a[i][j]=a[i][n-j-1];
           a[i][n-j-1]=t;
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


