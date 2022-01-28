#include<stdio.h>
int main(void)
{
    struct employee
    {
        char name[10];
        char dept[10];

        struct
        {
            char age[20];
            char salary[20];

        } details;

        struct
        {
            char hr[20];
            char finance[20];
        } division;
    };
    struct employee emp;
    printf("Enter employee details: \n");
    printf("Name: ");
    gets(emp.name);
    printf("Dept: ");
    gets(emp.dept);
    printf("Age: ");
    gets(emp.details.age);
    printf("salary: ");
    gets(emp.details.salary);
    printf("HR: ");
    gets(emp.division.hr);
    printf("Finance: ");
    gets(emp.division.finance);

    printf("\nEmployee Details: \n");
    printf("Name: %s\n", emp.name);
    printf("Dept: %s\n", emp.dept);

    printf("\nOther Details: \n");
    printf("Age: %s\n", emp.details.age);
    printf("Salary: %s\n", emp.details.salary);

    printf("\nDivision: \n");
    printf("HR: %s\n", emp.division.hr);
    printf("Finance: %s\n", emp.division.finance);

    return 0;
}
