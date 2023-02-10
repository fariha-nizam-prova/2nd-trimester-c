#include<stdio.h>
int main()
{
    int i,n,max,min,x,y;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    max=a[0];
    min=a[0];
    x=0;
    y=0;
    for(i=0;i<n;i++)
    {
        if(a[i]>=max)
        {
            max=a[i];
            x=i;
        }
        else if(a[i]<=min)
        {
            min=a[i];
            y=i;
        }
    }
    printf("Max: %d, Index: %d\n",max,x);
    printf("Min: %d, Index: %d\n",min,y);
    return 0;
}
