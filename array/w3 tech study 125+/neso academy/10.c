#include<stdio.h>
int main()
{
    int i,n,s,f=0;
    int a[100];
    scanf("%d",&n);
    printf("Enter inputs: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&s);

    for(i=0;i<n;i++)
    {
    if(a[i]==s)
    {
         printf("Found at index position: %d,%d\n",a[i],i);
         f=1;

    }
    }

    if(f==0)
    {
         printf("Not found");

    }


    return 0;
}
