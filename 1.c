#include<stdio.h>
int main()
{
    char choice;

printf("Run random function \n");
printf("Exit \n");

choice = getchar();
fflush(stdin);

switch(choice)
{

            case '1':
                 //randomFunction();
                 printf("prova");

            case '2':
                exit(0);
                 //I want this case to exit the console the console
}
   return 0;
}
