#include<stdio.h>
int main()
{
    int i,j,n;
    scanf("%d",&n);
    for(i=n;i>0;i--)
    {
        for(j=1;j<=n;j++)
        {
           //printf("*");
            if(i==1 || j==n || j==i)
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





         /*    *
               **
               * *
               *  *
               *   *
               ******     */


