#include<stdio.h>
int main()
{
    int i,j,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(i==1||i==n||i==(n+1)/2||j==1||j==n)
            {
                printf("*");
            }
            else
            {                 // DONT FORGET TO SPECIFY THE SPACE
                printf(" ");  //NB : in code every single step should be decleard
            }                       // cause PC is a dumb machine.
        }
        printf("\n");
    }
    return 0;
}
