#include<stdio.h>

struct student
{
    char name[100];
    char id[30];
    float cgpa;
};

int main()
{

    struct student s1;
    //gets(s1.name);
    fgets(s1.name, sizeof(s1.name), stdin);
    fgets(s1.id, sizeof(s1.id), stdin);
    //fgffflash(stdin);
    //fgets(s1.id);
    scanf("%f",&s1.cgpa);
    puts(s1.name);
    puts(s1.id);
    printf("%f",s1.cgpa);

    return 0;
}


//#include<stdio.h>
//void main ()
//{
//    char s[20];
//    printf("Enter the string? ");
//    fgets(s, 20, stdin);
//    //printf("You entered %s",s);
//    puts(s);
//}
