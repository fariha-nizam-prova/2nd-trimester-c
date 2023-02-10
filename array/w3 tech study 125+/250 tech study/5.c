#include<stdio.h>
int main()
{
    int i,n,j=0,k=0;
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
           if(a[i]%2==0)
           {
               j++;
           }
           else
           {
               k++;
           }

    }
    printf("Number of even elements: %d\n",j);
    printf("Number of odd elements: %d",k);
    return 0;
}

