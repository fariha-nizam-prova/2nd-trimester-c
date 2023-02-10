
#include<stdio.h>
int main()
{
    int i,j,n,m,k=1,f=0;
    scanf("%d",&n);
    m=n/2;
    for(i=1;i<=m;i++)
    {
       for(j=1;j<=m+1;j++)
       {
          if(j<=i)
          {
            if(f==0)
            {
                if(k<=n)
               {
               printf("%d",k);
               k++;
               if(k==n)
               {
                   f=1;
               }

               }
            }

           else if(f==1)
           {
               printf("%d",k);
               k--;
           }
          }
          else
          {
              printf(".");
          }
       }
        printf("\n");
    }
    for(i=0;i<=m;i++)
    {
        for(j=0;j<=m;j++)
        {
            if(j<=(m-i))
            {
              if(f==1)
              {
                   if(k>=1)
               {
                   printf("%d",k);
                   k--;
                   if(k==1)
                   {
                       f=0;
                   }
               }

              }
               else if(f==0)
               {

                   if(k<=n)
                   {
                       printf("%d",k);
                    k++;
                    if(k==n)
                    {
                        f=1;
                    }
                   }
               }
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }




    return 0;
}

