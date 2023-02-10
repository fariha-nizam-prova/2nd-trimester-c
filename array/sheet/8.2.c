#include<stdio.h>
int main()
{
    int i,n,omax,omin,x,y;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2!=0)
        {
            omax=a[i];
            x=i;
            omin=a[i];
            y=i;
        }
    }

    for(i=0;i<n;i++)
    {
        if(a[i]>=omax && a[i]%2!=0)
        {
            omax=a[i];
            x=i;
        }
        else if(a[i]<=omin && a[i]%2!=0)
        {
            omin=a[i];
            y=i;
        }
    }
    printf("Max: %d, Index: %d\n",omax,x);
    printf("Min: %d, Index: %d\n",omin,y);
    return 0;
}

