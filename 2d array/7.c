#include<stdio.h>
int main()
{
    int i,j,k;
   //scanf("%d%d",&n,&m);
    int a[3][3],b[3][3],c[3][3];

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
     for(j=0;j<3;i++)
    {
        for(k=0;k<3;j++)
        {
            scanf("%d",&b[j][k]);
        }
    }

      for(i=0;i<3;i++)
    {
        int s=0;
        for(j=0;j<3;j++)
        {
            for(k=0;k<3;k++)
            {
                c[i][j]=a[i][j]*b[j][k];
                s=s+c[i][j];
                printf("%d",s);
            }
        }
        printf("\n");
    }
    return 0;

}

