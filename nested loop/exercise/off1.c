int main()
{
    int i,j,k,m,n,p,sum;
    scanf("%d %d %d",&m,&n,&p);
    int a[m][n],b[n][p];
    float c[m][p];
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0; i<n; i++)
    {
        for(j=0; j<p; j++)
        {
            scanf("%d",&b[i][j]);
        }
    }

    for(i=0; i<m; i++)
    {
        for(j=0; j<p; j++)
        {
            sum=0;
            for(k=0; k<n; k++)
            {
                sum+=a[i][k]*b[k][j];
            }
            c[i][j]=sum;
        }

    }

    // printf("multiplication is:\n");
    for(i=0; i<m; i++)
    {
        for(j=0; j<p; j++)
        {
            printf("%.1f ",c[i][j]);
        }

        printf("\n");
    }


    return 0;
}
