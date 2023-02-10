#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter the size of the arry: ");
    scanf("%d",&n);
    int s[n];
    printf("Enter the elements of arry: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&s[i]);
    }
    printf("\nArry in reverse: ");
    for(i=n-1;i>=0;i--)
    {
        printf("%d ",s[i]);
    }
    return 0;
}



