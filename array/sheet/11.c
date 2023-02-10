#include<stdio.h>
int main()
{
    int i,n;
    scanf("%d",&n);
    int a[n],b[n];
    for(i=0;i<n;i++)
    {
       scanf("%d",&a[i]);
    }
    printf("\nArray A: ");
    for(i=0;i<n;i++)
    {
       printf(" %d",a[i]);
    }
    for(i=0;i<n;i++)
    {
      b[n-1-i]=a[i];
    }
    printf("\nArray B: ");
    for(i=0;i<n;i++)
    {
        printf(" %d",b[i]);
    }
    return 0;
}
