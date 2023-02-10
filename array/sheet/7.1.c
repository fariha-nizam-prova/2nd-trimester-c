
//copy an array to another
#include<stdio.h>
int main()
{
    int i,j,n;
    scanf("%d",&n);
    int a[n],b[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<=n/2;i++)
    {
        b[i]=a[i];
    }
    for(j=n-1;j>n/2;j--)
    {
       b[j]=a[j];
    }
    for(i=0;i<=n/2;i++)
    {
       printf("%d ",b[i]);
    }
    for(j=n-1;j>n/2;j--)
    {
       printf("%d ",b[j]);
    }


    return 0;


}

