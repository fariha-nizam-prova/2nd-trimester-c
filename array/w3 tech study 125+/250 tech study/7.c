#include<stdio.h>
int main()
{
    int i,n,num,pos;
    printf("Enter the element number: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the number: ");
    scanf("%d",&num);
    printf("\nEnter the position: ");
    scanf("%d",&pos);
    for(i=n;i>=pos;i--)
    {
           a[i]=a[i-1];
    }
      a[pos-1]=num;
      n++;
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }

    return 0;
}

