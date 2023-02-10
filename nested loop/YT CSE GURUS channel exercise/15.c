#include<stdio.h>
int main()
{
    int i,j,n;

    scanf("%d",&n);
    for(i=n;i>0;i--)
    {
        for(j=i;j>0;j--)
        {
            printf("%d",j);
        }

        printf("\n");
    }
    return 0;
}


                    /*     54321
                           4321
                           321
                           21
                           1    */


