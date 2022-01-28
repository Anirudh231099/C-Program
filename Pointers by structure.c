
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
    struct admin b[2];
    struct admin *ptr=NULL;
    ptr=b;
    for(int i=0;i<2;i++)
    {
        printf("\nStudent details %d\n",(i+1));
        printf("\nEnter Name: ") ;
        scanf("%s",ptr->std[i].name);
        printf("\nEnter Branch: ") ;
        scanf("%s",ptr->std[i].branch);

        printf("\nStaff details %d\n",(i+1));
        printf("\nEnter Name: ") ;
        scanf("%s",ptr->sta[i].name);
        printf("\nEnter experience: ") ;
        scanf("%s",ptr->sta[i].experience);

        printf("\nNon Staff details %d\n",(i+1));
        printf("\nEnter Work: ") ;
        scanf("%s",ptr->non[i].work);
        printf("\nEnter age: ") ;
        scanf("%s",ptr->non[i].age);
        ptr++;
    }
    ptr=b;
    printf("\nInformation by Pointers : ") ;
    for(int i=0;i<2;i++)
    {
         printf("\nStudent details %d\n",(i+1));
         printf("Name: %s\n",ptr->std[i].name);
         printf("Branch: %s\n",ptr->std[i].branch);

         printf("\nStaff details %d\n",(i+1));
         printf("Name: %s\n", ptr->sta[i].name);
         printf("Experience: %s\n", ptr->sta[i].experience);

         printf("\nNon Staff details %d\n",(i+1));
         printf("Work: %s\n" ,ptr->non[i].work);
         printf("Age: %s\n", ptr->non[i].age);
         ptr++;
    }
    return 0;

}
