#include<stdio.h>
int main()
{
    int i,j;
    char n;
    scanf("%c",&n);
    for(i=n;i>0;i--)
    {
        for(j='A';j<=i;j++)
        {
            printf("%c",j);
        }

        printf("\n");
    }
    return 0;
}


