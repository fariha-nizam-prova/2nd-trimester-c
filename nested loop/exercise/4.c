#include<stdio.h>
int main()
{
    int i,j,n,c;
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        for(j=0;j<=(n-i);j++)
        {
            printf(" ");
        }
        for(j=0;j<=i;j++)
        {
            if(j==0||j==i)
            {
               c=1;
            }
            else
            {
                c=c*(i-j+1)/j;
            }
             printf("%d ",c);
        }
        printf("\n");

    }
    return 0;
}
