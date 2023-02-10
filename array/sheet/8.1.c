// even max & min
#include<stdio.h>
int main()
{
    int i,n,emax,emin,x,y;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            emax=a[i];
            x=i;
            emin=a[i];
            y=i;
        }
    }

    for(i=0;i<n;i++)
    {
        if(a[i]>=emax && a[i]%2==0)
        {
            emax=a[i];
            x=i;
        }
        else if(a[i]<=emin && a[i]%2==0)
        {
            emin=a[i];
            y=i;
        }
    }
    printf("Max: %d, Index: %d\n",emax,x);
    printf("Min: %d, Index: %d\n",emin,y);
    return 0;
}
