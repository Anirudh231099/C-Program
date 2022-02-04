#include<conio.h>
#include<stdio.h>
#include<string.h>
int main()
{
    FILE *fp = fopen("hi.csv","w");
    if(fp==NULL)
    {
        printf("error");
    }
    else{
        printf("File created successfull \n");
    }
    fclose(fp);
    return 0;
}
