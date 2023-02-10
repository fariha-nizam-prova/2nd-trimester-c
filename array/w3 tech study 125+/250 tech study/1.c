#include<stdio.h>
int main()
{
    int i,n,c=0;
    printf("Enter the element number: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Negative elements: ");
    for(i=0;i<n;i++)
    {
        if(a[i]<0)
        {
            printf("%d ",a[i]);
            c++;
        }
    }
    printf("\n%d ",c);
    return 0;
}
