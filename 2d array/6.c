#include<stdio.h>
int main()
{
    int i,j,n,m;
    scanf("%d%d",&n,&m);
    int a[n][m],b[n][m],c[n][m];

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
            scanf("%d",&b[i][j]);
        }
    }

      for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
           c[i][j]=a[i][j]+b[i][j];

           printf("%d ",c[i][j]);
        }
        printf("\n");
    }
    return 0;

}

