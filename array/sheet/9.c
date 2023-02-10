#include<stdio.h>
int main()
{
    int i,s=0;
    int n;
    scanf("%d",&n);
    char a[n];
    for(i=0;i<n;i++)
    {
        scanf("%c",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]=='a' || a[i]=='e' ||a[i]=='i' || a[i]=='o' || a[i]=='u' || a[i]=='A' || a[i]=='E' || a[i]=='I' || a[i]=='O' || a[i]=='U' )
        {
          printf("%c ",a[i]);
                 s=s+1;

        }
    }

    printf("\n%d",s);
    return 0;
}
