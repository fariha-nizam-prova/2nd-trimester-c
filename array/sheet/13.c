#include<stdio.h>
int main()
{
    int i,j,n,pos;
    printf("Enter the range: ");
    scanf("%d",&n);
    int a[n];
    printf("enter the array elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter index position: ");
    scanf("%d",&pos);
    for(i=pos;i<n;i++)
    {
        a[i]=a[i+1];
    }
    n--;
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}

