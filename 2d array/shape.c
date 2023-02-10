#include<stdio.h>
int main()
{
    int i, j, m, n, p,k;

    printf("m = ");
    scanf("%d", &m);

    printf("n = ");
    scanf("%d", &n);

    printf("p = ");
    scanf("%d", &p);

    float A[m][n], B[n][p], AB[m][p],sum;


    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            scanf("%f", &A[i][j]);
        }
    }

    for(i=0; i<n; i++)
    {
        for(j=0; j<p; j++)
        {
            scanf("%f", &B[i][j]);
        }
    }




    for(i=0; i<m; i++)
    {
        for(j=0; j<p; j++)
        {
            sum = 0;
            for(k=0; k<n; k++)
            {
                AB[i][j]= A[i][k] * B[k][j];
                sum += AB[i][j];
            }
            printf("%.1f ", sum);
        }
        printf("\n");
    }

    return 0;
}
