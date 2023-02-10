
#include<stdio.h>
int main()
{
    int i,j,p=0,n;
    scanf("%d",&n);
    for(i=n;i>0;i--)
    {
        for(j=1;j<=n*2-1;j++)
        {
            if(i==1||j==n||j>=i && j<=n+p)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        p++;
        printf("\n");
    }
}
