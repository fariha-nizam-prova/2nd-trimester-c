#include<stdio.h>
int main()
{
    int i,n,s=0;
    printf("enter range: ");
    scanf("%d",&n);
    int a[n];
    printf("enter numbers: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        s=s+a[i];
    }
    printf("\nsum= %d\n",s);



    return 0;
}


