#include<stdio.h>
int main()
{
    int i,j,n,m,k;
    scanf("%d%d",&n,&m);
    int a[100],b[100];
    for(i=0;i<n;i++)
    {
       scanf("%d",&a[i]);
    }
    for(i=0;i<m;i++)
    {
       scanf("%d",&b[i]);
    }

    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(a[i]==b[j])
            {
                for(k=i;k<n-1;k++)
                {
                    a[k]=a[k+1];
                }
                i--;
                n--;
            }
        }
    }
    for(i=0;i<n;i++)
    {
       printf("%d ",a[i]);
    }


    return 0;
}

