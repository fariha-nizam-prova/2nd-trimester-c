
#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter the element number: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=0;i<n;i++)
    {
            printf("%d ",a[i]);
    }
    return 0;
}
