#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fp;
    char name[20];
    int roll_no;
    float marks;
    int i,n;

    fp = fopen("fprintf.txt", "w");

    if(fp == NULL)
    {
        printf("Error opening file\n");
        exit(1);
    }

    printf("Enter the number of records you want to enter: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        fflush(stdin);
        printf("\nEnter the details of student %d \n\n", i +1);

        printf("\nEnter name of the student: ");
        gets(name);

        printf("Enter roll no: ");
        scanf("%d", &roll_no);

        printf("Enter marks: ");
        scanf("%f", &marks);

        fprintf(fp, "Name: %s\nRoll no: %d\nMarks: %f\n\n",name, roll_no, marks);

    }

    fclose(fp);
    return 0;
}



