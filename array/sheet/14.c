
#include<stdio.h>
int main()
{
    int i,j,n,t,m;
    printf("Enter the A array range: ");
    scanf("%d",&n);
    int a[100],b[100];
    printf("enter the A array elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
     printf("Enter the B array range: ");
    scanf("%d",&m);
    printf("enter the B array elements:\n");
    for(i=0;i<m;i++)
    {
        scanf("%d",&b[i]);
    }
    printf("A array: ");
    for(i=0;i<m;i++)
    {
       t=a[i];
       a[i]=b[i];
       printf("%d ",t);
    }

    printf("\n");
    for(i=0;i<m;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}
