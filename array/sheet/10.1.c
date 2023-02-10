#include<stdio.h>
int main()
{
int a[100];
int i,n,m,count=0;
scanf("%d" ,&n);
for(i=0;i<=n-1;i++)
{
    scanf("%d" ,&a[i]);
}
scanf("%d" ,&m);
for(i=0;i<=n-1;i++)
{
    if(a[i]==m)
    {
        count++;
    }
}
if(count==2)
    printf("yes");
else if(count<2 || count>2)
    printf("no");
    else
        printf("no");


return 0;
}
