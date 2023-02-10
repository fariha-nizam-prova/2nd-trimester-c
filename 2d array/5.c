#include<stdio.h>
int main()
{
    int i,j,m;
    scanf("%d",&m);
    int arr[m][m];

    for(i=0;i<m;i++)
    {
        for(j=0;j<m;j++)
        {
            if(i==j)
            {
                printf("1 ");
            }
            else
            {
                printf("0 ");
            }
        }
        printf("\n");
    }
    return 0;

}
