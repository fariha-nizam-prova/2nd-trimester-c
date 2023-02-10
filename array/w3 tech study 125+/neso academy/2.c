#include<stdio.h>
int main()
{
    int i,n,s=0;
    int a[100];
    printf("enter range: ");
    scanf("%d",&n);
    printf("enter numbers:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        s=s+a[i];
    }
    printf("sum= %d",s);



    return 0;
}


