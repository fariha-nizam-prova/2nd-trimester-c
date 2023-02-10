#include<stdio.h>
int main()
{

    int i,j,n,m,s=0;
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
            if(i%2!=0||j%2!=0)
            {
                s=s+a[i][j];
                //printf("%d ",a[i][j]);
            }
        }
    }
    printf("%d ",s);
    return 0;
}


