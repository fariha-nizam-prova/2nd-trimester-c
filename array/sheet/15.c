
#include<stdio.h>
int main()
{

     int a,i;
    int b[100];
    printf("enter how many number=");
    scanf("%d",&a);
    for(i=0;i<a;i++){
        scanf("%d",&b[i]);
    }
    for(i=0;i<a;i++){
        if(b[i]%3==0)
        {
         b[i]=-1;
        }
        printf("%d ",b[i]);
    }
        return 0;
}
