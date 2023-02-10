#include<stdio.h>
int main()
{
    int i,n;
    float s=0,avg;
    scanf("%d",&n);
    float a[n];
    for(i=0;i<n;i++)
    {
        scanf("%f",&a[i]);
        s=s+a[i];
    }
    avg=s/n;
    printf("\n%f",avg);
    return 0;
}
