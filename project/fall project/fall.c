#include<stdio.h>
#include<string.h>

struct employee
{
    char name[100], designation[100];
    int  salaryInBDT;
    float experienceInYear;
};

float minimumSalary;
int employeeCount = 0, minimumSalaryIndex = -1;
struct employee emp[100];

void printOperationTypes( )
{
    printf("Press 1 to=> Add employee:\n");
    printf("Press 2 to=> Employee List:\n");
    printf("Press 3 to=> Search Employee:\n");
    printf("Press 4 to=> Get minimum salary Detail:\n");
    printf("Press 5 to=> Exit:");

    printf("\n");
}

void readAllFromFile()
{
    FILE *fp;
    fp = fopen("DataBase.txt", "r");
    if(fp!=NULL)
    {
        employeeCount = 0;
        while(!feof(fp))
        {
            fscanf(fp, "%s %s %d %f", &emp[employeeCount].name, &emp[employeeCount].designation, &emp[employeeCount].salaryInBDT, &emp[employeeCount].experienceInYear);
            employeeCount++;
        }
    }
    fclose(fp);

    employeeCount--;
    showAllEmployee();
}

void saveToFile(int index)
{
    FILE *fp;
    fp = fopen("DataBase.txt", "a+");
    fprintf(fp, "%s %s %d %f\n", emp[index].name, emp[index].designation, emp[index].salaryInBDT, emp[index].experienceInYear);
    fclose(fp);
}

void addEmployee(int i)
{
    printf("\n\n");

    printf("Name:\t\t\t\t");
    fflush(stdin);
    gets(emp[i].name);

    printf("Designation:\t\t\t");
    fflush(stdin);
    gets(emp[i].designation);

    printf("salaryInBDT(per month in BDT):\t");
    scanf("%d", &emp[i].salaryInBDT);

    printf("Experience (in years):\t\t");
    scanf("%f", &emp[i].experienceInYear);

    if(i == 0)
    {
        minimumSalary = emp[i].salaryInBDT;
        minimumSalaryIndex = i;
    }

    if(emp[i].salaryInBDT < minimumSalary)
    {
        minimumSalary = emp[i].salaryInBDT;
        minimumSalaryIndex = i;
    }

    saveToFile(i);
    printf("\nEmployee data saved successfully!\n\n\n");

}

void printByIndex(int i)
{
    printf("%-5d %-30s %-30s %-15d %-10.0f \n", i+1, emp[i].name, emp[i].designation, emp[i].salaryInBDT, emp[i].experienceInYear);
}

void printHeader()
{
    char  a[10] = "Sl.", b[50] = "Employee Name", c[50]="Designation", d[50]="Salary in BDT", e[50] = "Experience in Years";
    printf("%-5s %-30s %-25s %-15s %-15s\n", a, b, c, d, e);
}

void showAllEmployee()
{

    printHeader();

    for(int i = 0; i < employeeCount; i++)
    {
        printByIndex(i);
    }

    printf("\n");
}



void searchByName()
{
    char searchName[100];
    int isEmployeeFound = 0;

    printf("\nEnter name: ");
    fflush(stdin);
    gets(searchName);
    readAllFromFile();
    for(int i = 0; i < employeeCount; i++)
    {
        if(strcmp(emp[i].name, searchName) == 0)
        {
            isEmployeeFound = 1;
            printf("\nEmployee Sl no # %d\n", i+1);
            printHeader();
            printByIndex(i);

            break;
        }
    }

    if(isEmployeeFound==0)
        printf("No employee found with name: %s\n", searchName);

    printf("\n");

}

void getMinimumSalary()
{
    if(minimumSalaryIndex >= 0)
    {
        printf("Minimum salary at position: %d\n", minimumSalaryIndex + 1);
        printHeader();
        printByIndex(minimumSalaryIndex);
        printf("\n");
    }
    else
        printf("Please add at least one employee!\n");

    printf("\n");

}

int main()
{
    int operationType;

    printf("\n\n\n\t\t-Employee Management System-\n\t\t=============================\n\n\n\n");

    printf("Maximum 100 employees can be added\n");
    printOperationTypes();

    while (scanf("%d",&operationType)!=EOF)
    {
        switch (operationType)
        {
        case 1:
            addEmployee(employeeCount);
            //employeeCount += 1;
            break;

        case 2:
            readAllFromFile();
            break;

        case 3:
            searchByName();
            break;

        case 4:
            getMinimumSalary();
            break;

        case 5:
            exit(0);
            break;

        default:
            printf("\nWrong entry. Try again.\n\n\n\n");

        }

        printOperationTypes();
    }

    return 0;
}

