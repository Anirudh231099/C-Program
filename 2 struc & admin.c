#include <stdio.h>
#include <stdlib.h>
int main()
{
struct Employee
    {
        char name[10];
        char designation[10];
    };
struct details
    {
        char id[20];
        char branch[20];
    };
struct admin
    {
        struct Employee emp[3];
        struct details det[3];
    };
struct admin a;

FILE *fptr,*fptr1;
int i;
fptr = fopen("employee1.txt", "r");
if(fptr==NULL)
    {
        printf("Unable to open\n");
        exit(1);
    }

printf("Employee Details : \n");
printf("-------------------\n");
 for(i =0;i<4;i++)
 {
     fscanf(fptr,"%s %s", &a.emp[i].name,&a.emp[i].designation);
     printf("%s ",a.emp[i].name);
     printf("%s\n",a.emp[i].designation);
     printf("\n");
 }
//------------------------------------------------------------------------------------------//
 fptr1 = fopen("details1.txt","r");
    if(fptr1==NULL)
    {
        printf("Unable to open\n");
        exit(1);
    }
printf("Details is: \n");
printf("-------------------\n");
for(i=0;i<3;i++)
    {
        fscanf(fptr1, "%s %s", &a.det[i].id,&a.det[i].branch);
        printf("%s ",a.det[i].id);
        printf("%s\n",a.det[i].branch);
        printf("\n");
    }

//for(i=0;i<4;i++)
    //{
        //while(fread(&a,sizeof(struct admin),1,fptr))
        //printf("name =%s\n designation =%s\n",a.emp[i].name,a.emp[i].designation);
        //fclose(fptr);
    //}
 //for(i=0;i<3;i++)
   // {
        //while(fread(&a,sizeof(struct admin),1,fptr1))
        //printf("id = %s\n branch =%s\n",a.det[i].id,a.det[i].branch);
        //fclose(fptr1);
    //}
 fclose(fptr);
 fclose(fptr1);
 return 0;
}
