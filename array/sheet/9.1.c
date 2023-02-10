#include<stdio.h>
int main()
{
    int i,s=0;
    int n;
    scanf("%d",&n);
    char a[n];
    for(i=0;i<n;i++)
    {
        scanf("%c",&a[i]);
    }
    for(i=0;i<n;i++)
    {
          s=s+1;
          printf("%c ",a[i]);
    }

    printf("\n%d",s);
    return 0;
}

