
#include<stdio.h>
int main()
{
    int i,j;
    char n;
    scanf("%c",&n);
    for(i='A';i<=n;i++)
    {
        for(j=n;j>=i;j--)
        {
            printf("%c",j);
        }

        printf("\n");
    }
    return 0;
}



