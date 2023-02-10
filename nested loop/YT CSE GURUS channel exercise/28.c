#include<stdio.h>
int main()
{
    int i,j,n;
    scanf("%d",&n);
    for(i=n;i>0;i--)
    {
        for(j=1;j<=i;j++)
        {
            if(i==n ||  j==1 || j==i)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }


}




           /*   *****
                *  *
                * *
                **
                *           */

