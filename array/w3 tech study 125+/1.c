#include<stdio.h>
int main()
{
    int n[]={2,3,4,9};
    int i;

    printf("%d\n",n[2]); //print specific index value(4)

    n[0]=1;   //to change specific index's value
    printf("%d\n",n[0]);
    n[2]=7;
    printf("%d\n",n[2]);
    for(i=0;i<5;i++)     //loop in arry. only for loop
    {
        printf("%d\n\n",n[i]);
    }


    return 0;
}
