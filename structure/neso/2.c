#include<stdio.h>

 struct employee
 {
     char *name;
     int age;
     int salary;
 };

 int manager()
 {
     struct employee manager;
     manager .age=27;

     if(manager.age > 30)
        manager.salary=65000;
     else
        manager.salary=55000;
     return manager.salary;
 }

 int main()
 {
     struct employee emp1;
     struct employee emp2;
     printf("Enter the salary of empl: ");
     scanf("%d",&emp1.salary);
     printf("Enter the salary of emp2: ");
     scanf("%d",&emp2.salary);
     printf("Employee 1 salary is: %d\n",emp1.salary);
     printf("Employee 2 salary is: %d\n",emp2.salary);
     printf("managers salary is: %d",manager());
     return 0;
 }

