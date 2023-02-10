#include<stdio.h>
int main()
{
    int i,j,n;
    scanf("%d",&n);
    for(i=n;i>0;i--)
    {
        for(j=1;j<=n;j++)
        {
           if(i==n||i==1||j==i)
           {
                printf("z");
           }
           else
           {
                printf(" ");
           }
        }
        printf("\n");
    }
    return 0;
}
