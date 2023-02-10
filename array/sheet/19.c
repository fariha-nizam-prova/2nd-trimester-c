#include<stdio.h>
int main()
{
    int i,j,n,m,k,f=0;
    scanf("%d%d",&n,&m);
    int a[100],b[100],c[100];
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
                printf("%d ",a[i]);
                f=1;
            }

        }
    }
    if(f==0)
    {
        printf("empty set");
    }
    return 0;
}


