#include<stdio.h>
#include<stdlib.h>
#include<string.h>

const char* Person_Format_In = "%[^,],%d,%c";
const char* Person_Format_Out = "%s,%d,%c\n";

typedef struct Person
{

    char name[20];
    int age;
    char gender;
}Person;

void main()
{
    Person p1={
    .name="John",
    .age=22,
    .gender='M'
    };
    FILE* file;
    fopen_s(&file,"file.txt","w+");
    if(file==NULL)
    {
       return 1;
    }
    fprintf_s(file,Person_Format_Out,p1.name,p1.age,p1.gender);
    fseek(file,0,SEEK_SET);
    fscanf_s(file,Person_Format_In,p1.name,&p1.age,&p1.gender);

}
