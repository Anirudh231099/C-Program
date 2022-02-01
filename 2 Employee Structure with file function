#include<stdio.h>
#include<stdlib.h>
int main()
{
    struct employee{
    char name[20];
    char dept[20];

    struct{
    char salary[10];
    int age[10];
    }det;

    };
    struct employee emp;
    FILE *f1,*f2;
    f1=fopen("employee.txt","r");
    f2=fopen("details.txt","r");

    printf("Employee Details :\n");
    printf("------------------\n");
    fread(&emp,sizeof(emp),1,f1);
    printf("Below are the details from the File \n");
    printf("%s\n", emp.name);
    printf("%s\n", emp.dept);
    fclose(f1);

 fread(&emp.det,sizeof(emp.det),1,f2);
 printf("\nSalary Details from the file: \n");
 printf("%s\n",emp.det.salary);
 printf("%d\n",emp.det.age);
 fclose(f2);

void openFile(FILE *f1, FILE *f2)
 {
     if(f1==NULL || f2==NULL )
     {
         printf("invalid");
         exit(1);
     }
 }
 fclose(f1);
 fclose(f2);
 return 0;
}
