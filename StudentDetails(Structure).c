#include<stdio.h>
int main(void)
{
    struct student
    {
        char name[10];
        char branch[10];
    };
    struct staff
    {
        char name[10];
        char experience[10];
    };
    struct nonstaff
    {
        char work[10];
        char age[10];
    };
    struct admin
    {
        struct student std[2];
        struct staff sta[2];
        struct nonstaff non[2];
    };
    struct admin a;
    for(int i=0;i<2;i++)
    {
        printf("\nStudent details %d\n",(i+1));
        printf("\nEnter Name: ") ;
        scanf("%s",a.std[i].name);
        printf("\nEnter Branch: ") ;
        scanf("%s",a.std[i].branch);

        printf("\nStaff details %d\n",(i+1));
        printf("\nEnter Name: ") ;
        scanf("%s",a.sta[i].name);
        printf("\nEnter experience: ") ;
        scanf("%s",a.sta[i].experience);

        printf("\nNon Staff details %d\n",(i+1));
        printf("\nEnter work: ") ;
        scanf("%s",a.non[i].work);
        printf("\nEnter age: ") ;
        scanf("%s",a.non[i].age);
    }
    printf("\nInformation : ") ;
    for(int i=0;i<2;i++)
    {
         printf("\nStudent details %d\n",(i+1));
         printf("Name: %s\n",a.std[i].name);
         printf("Branch: %s\n", a.std[i].branch);

         printf("\nStaff details %d\n",(i+1));
         printf("Name: %s\n", a.sta[i].name);
         printf("Experience: %s\n", a.sta[i].experience);

         printf("\nNON Staff details %d\n",(i+1));
         printf("Work: %s\n" ,a.non[i].work);
         printf("Age: %s\n", a.non[i].age);
    }
    return 0;

}
