#include<stdio.h>
int main()
{
    int i,n,s,f=0;
    scanf("%d",&n);
    printf("Enter inputs: ");
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("search number: ");
    scanf("%d",&s);
    for(i=0;i<n;i++)
    {
    if(a[i]==s)
    {
         printf("Found %d at index position: %d\n",a[i],i);
         f=1;
    }
    }
    if(f==0)
    {
         printf("Not found");
    }
  return 0;
}

