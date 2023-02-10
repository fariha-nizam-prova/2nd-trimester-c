#include<stdio.h>
int main()
{
    int i,j,k,r,c,p,s;
    scanf("%d%d%d",&r,&c,&p);
    int a[r][c],b[c][p];
    float co[r][p];
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0; i<c; i++)
    {
        for(j=0; j<p; j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    for(i=0; i<r; i++)
    {
        for(j=0; j<p; j++)
        {
            s=0;
            for(k=0; k<c; k++)
            {
                s+=a[i][k]*b[k][j];
            }
            co[i][j]=s;
            printf("%.1f ",co[i][j]);
        }
        printf("\n");
    }
//    for(i=0; i<r; i++)
//    {
//        for(j=0; j<p; j++)
//        {
//            printf("%.1f ",co[i][j]);
//        }
//        printf("\n");
//    }
    return 0;
}
