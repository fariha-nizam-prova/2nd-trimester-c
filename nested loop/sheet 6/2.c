
#include<stdio.h>
int main()
{
    int i,j,n,p=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=i;j<=n+p;j++)
        {
          printf("%d",j);
        }
        p++;
        printf("\n");
    }
    return 0;
}
