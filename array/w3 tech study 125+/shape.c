#include<stdio.h>
int main()
{
     int a,pos,i;
    int b[100];
    printf("enter how many number=");
    scanf("%d",&a);
    for(i=0;i<a;i++){
        scanf("%d",&b[i]);
    }
    printf("Which index to Delate =");
scanf("%d",&pos);
for(i=(a+1);i>=pos;i--){
  if(i==pos) { b[i-1]=b[i];
    b[pos]=b[i-1];
  }
  else {
     b[i-1]=b[i];
  }
}
 for(i=0;i<a;i++)
 {
     printf("%d ",b[i]);
 }

    return 0;
}
