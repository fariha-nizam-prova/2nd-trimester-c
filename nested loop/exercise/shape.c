#include<stdio.h>
int main()
{
    int i, j, n, sum=0;
    printf("N = ");
    scanf("%d", &n);
    int arr[n][n];

    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            arr[i][j] = i;
        }
    }
    printf("The Reverse Nazi Flag : \n\n\n");


    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            if(j==n/2 && i!=j)
            {
                sum += arr[i][j];
                printf("%d ", arr[i][j]);
            }
            else if(i==n/2)
            {
                sum += arr[i][j];
                printf("%d ", arr[i][j]);
            }
            else if(i==0 || i==n-1)
            {
                if(i-j >= -n/2 && i-j <= n/2 || j==n-1 || j==0)
                {
                    printf("%d ", arr[i][j]);
                }
                else printf("  ");

            }
            else if(j==0)
            {
                if(i>n/2 && i<n-1)
                {
                    printf("%d ", arr[i][j]);
                }
                else printf("  ");
            }


            else if(j==n-1)
            {
                if(i>0 && i<n/2)
                {
                    printf("%d ", arr[i][j]);
                }
                else printf("  ");
            }

            else printf("  ");

        }
        printf("\n");
    }

  return 0;
}
