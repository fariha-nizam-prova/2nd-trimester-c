#include<stdio.h>
int main()
{
    int i,n,s=0;
    printf("Enter the element number: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        s=s+a[i];
    }
      printf("Sum of the elements: %d ",s);

    return 0;
}
