#include<stdio.h>
int main()
{
    int i,j,k,n,m,max,x,y;
    scanf("%d%d",&n,&m);
    int a[n][m];
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    max=a[0][0];
    x=0;
    y=0;
     for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(a[i][j]>=max)
            {
               max=a[i][j];
               x=i;
               y=j;
            }
        }
    }
    printf("max : %d",max);
     printf("\nlocation : [%d][%d]",x,y);

    return 0;

}

