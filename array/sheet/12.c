#include<stdio.h>
int main()
{
    int i,n,num,ipos;
    printf("ENter the range: ");
    scanf("%d",&n);
    int a[n];
    printf("Entr array elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the number: ");
    scanf("%d",&num);
    printf("Enter the index position: ");
    scanf("%d",&ipos);
    for(i=n;i>ipos;i--)
    {
        a[i]=a[i-1];
    }
    a[ipos]=num;
    n++;
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}
