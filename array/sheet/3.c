
#include<stdio.h>
int main()
{
    int i,n,s=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]%2==0)
        {
            s=s+a[i];
        }
    }
   printf("\n%d\n",s);

    return 0;
}