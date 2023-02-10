#include<stdio.h>
int main()
{
    int i,j,k,r,c,p;
    scanf("%d%d%d",&r,&c,&p);
    int a[r][c],b[c][p];
    float sum;

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
            sum=0;
            for(k=0; k<c; k++)
            {
                sum+=a[i][k]*b[k][j];
            }
            printf("%.1f ",sum);

        }
        printf("\n");
    }
    return 0;
}
