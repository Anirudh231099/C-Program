#include<stdio.h>
#include<stdlib.h>
int main()
{
    struct employee
    {
    char name[20];
    char designation[20];
    };
    struct details
    {
    char id[10];
    char branch[10];
    };
    struct admin
    {
    struct employee emp[2];
    struct details det[2];
    };
    struct admin a;

    FILE *f1,*f2;
    f1=fopen("employee.txt","r");
    f2=fopen("details.txt","r");

    void open(FILE *f1, FILE *f2)
    {
        if(f1==NULL || f2==NULL )
        {
            printf("invalid");
            exit(1);
        }
    }

    //1st file
    printf("Employee.txt :\n");
    fread(&a.emp,sizeof(a.emp),1,f1);
    printf("%s\n", a.emp);
    fclose(f1);

    //2nd file
    printf("\nDetails.txt: \n");
    fread(&a.det,sizeof(a.det),1,f2);
    printf("%s\n",a.det);
    fclose(f2);

    return 0;
}
