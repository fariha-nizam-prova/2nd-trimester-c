
#include<stdio.h>
int main()
{
    int i,n,max,min,x,y;
    printf("Enter the element number: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    max=a[0];
    min=a[0];
    x=0;
    y=0;
    for(i=0;i<n;i++)
    {
            if(a[i]>=max)
            {
                max=a[i];
                x=i;
            }
            else if(a[i]<=min)
            {
                min=a[i];
                y=i;
            }
    }
    printf("\n%d is max, index %d & %d is min, index %d\n",max,x,min,y);
    return 0;
}

