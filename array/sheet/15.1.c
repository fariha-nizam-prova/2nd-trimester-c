#include<stdio.h>
int main()
{
    int i,j,n;
    scanf("%d",&n);
    int a[100];
    for(i=0;i<n;i++)
    {
       scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%3==0)
        {
            a[i]=-1;
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}

