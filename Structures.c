#include <stdio.h>
int main(void)
{
    FILE *fptr;
    int id,age;
    int i ,s;
    char name[200];
    char course[200];
    char n[200];
    char c[200];
    fptr=fopen("Student.txt","w");
    if(fptr!=NULL)
    {
        printf("File creation successful..\n");
    }
    else{
        printf("File creation Failed.\n");
        return -1;
    }
    printf("Enter Student Name: ");
    gets(name);
    printf("Enter Student course: ");
    gets(course);
    printf("Enter Student Id: ");
    scanf("%d",&id);
    printf("Enter Student Age: ");
    scanf("%d",&age);

    fprintf(fptr, "%d %d %s %s",id,age,name,course);
    fclose(fptr);


    fptr=fopen("Student.txt","r");
    printf("\nStudent Information:\n");
    fscanf(fptr,"%d %d %s %[^\n]s", &i,&s,n,c);
    printf("Name: %s\n",n);
    printf("Course: %s\n",c);
    printf("ID: %d\n",i);
    printf("Age: %d\n",s);

    printf("\nEnd of file\n");
    fclose(fptr);
    return 0;
}

