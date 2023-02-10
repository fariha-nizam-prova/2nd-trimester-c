#include<stdio.h>
int main()
{
    int i,j=0,n;
    printf("Enter element number: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
       if(a[i]<0)
       {
           j++;
       }
    }
    printf("Total number of negative elements: %d",j);
}
