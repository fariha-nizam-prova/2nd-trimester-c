#include<stdio.h>
int main()
{
    int i,j,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=2*n;j++)
        {
            if(j<i)
            {
                printf(" ");
            }
            else if(j<(2*n+1-i))
            {
                printf("*");
            }
        }
      printf("\n");
    }
}
