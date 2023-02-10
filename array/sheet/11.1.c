#include<stdio.h>
int main()
{
    int i,n,t;
    scanf("%d",&n);
    int a[n],b[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Array A: ");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
     printf("\n");
    printf("Array B: ");
    for(i=0;i<n;i++)
    {
        b[i]=a[n-1-i];
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",b[i]);
    }
    return 0;
}

