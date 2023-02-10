#include<stdio.h>
#include<stdlib.h>
struct employee
{
    char name[100];
    char dgn[100];
    int  salary;
    float exp;
};


void main()
{
    struct employee emp[100];
    int i,j,what;
    int m,k,h;
    float min;
    int flag=0;
    int arr[100];
    printf("Sowayeb & co.\n");
    printf("Employee Management System\n");
    printf("=============================\n\n\n");

    h=0;
    FILE *fp;
    fp = fopen("DataBase.txt", "r");
    if(fp!=NULL)
    {
        while(!feof(fp))
        {
            fscanf(fp, "%s", &emp[h].name);
            fscanf(fp, "%s", &emp[h].dgn);
            fscanf(fp, "%d", &emp[h].salary);
            fscanf(fp, "%f", &emp[h].exp);
            h++;
        }
    }
    fclose(fp);

    for(i=h; i<100; i++)
    {
        printf("1=> Add Employee:\n");
        printf("2=> Employee List:\n");
        printf("3=> Search Employee:\n");
        printf("4=> Exit:\n");
        scanf("%d",&what);

// Adding  Employees
        switch (what)
        {
        case 1 :
            if(i>=100)
            {
                printf(" Sorry\nCan't add more than 100 Employees\n\n");
                break;
            }

            printf("Name:\t");
            fflush(stdin);
            gets(emp[i].name);
            printf("Designation:\t");
            fflush(stdin);
            gets(emp[i].dgn);
            printf("Monthly Salary(in bdt):\t");
            scanf("%d",&emp[i].salary);
            printf("Work Experience (in years):\t");
            scanf("%f",&emp[i].exp);
            printf("\nDone... Information saved \n\n\n");
            break;

//Showing the list
        case 2 :
            j=0;
            while(j!=i-1)
            {
                printf("\n\n# %d   ",j+1);
                printf("Name:\t");
                puts(emp[j].name);
                printf("Designation:\t");
                puts(emp[j].dgn);
                printf("Monthly Salary:\t");
                printf("%d\n",emp[j].salary);
                printf("Work Experience:\t");
                printf("%.1f year\n\n\n",emp[j].exp);
                j++;
            }
            i--;
            break;
        //search
        case 3 :
            printf("Enter The  Year :\t");
            scanf("%f",&min);
            for(k=0; k<i; k++)
            {
                if(emp[k].exp>=min)
                {

                    printf("\n\n# %d\t",k+1);
                    printf("Name:\t");
                    puts(emp[k].name);
                    printf("Designation:\t");
                    puts(emp[k].dgn);
                    printf("Monthly Salary:\t");
                    printf("%d\n",emp[k].salary);
                    printf("Work Experience:\t");
                    printf("%.1f year\n\n\n",emp[k].exp);
                    flag=1;
                }
            }
            if(flag!=1)
            {
                printf("\n No employee worked %d years  \n\n", min);
            }

            i--;
            break;
        case 4 :
        {
            FILE *fp;
            fp = fopen("DataBase.txt", "a+");
            for(m=h; m<i; m++)
            {
                fprintf(fp, "%s %s %d %f\n", emp[m].name, emp[m].dgn, emp[m].salary, emp[m].exp);
//                fprintf(fp, "%s", emp[m].dgn);
//                fprintf(fp, "%d", emp[m].salary);
//                fprintf(fp, "%f", emp[m].exp);
            }
            fclose(fp);
            exit(1);
        }

        default :
        {
            printf("Wrong!!\nTry again!!\n");
            i--;
        }
        }
    }
}
