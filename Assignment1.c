#include <stdio.h>
int main(void)
{
//writing to the file
    FILE *fptr,*fp;
    char name[200];
    char n[200];
    char ch[100], fname[20];
    int j;
    fptr=fopen("Story.txt","w");
    if(fptr!=NULL)
    {
        printf("File creation successful..\n");
    }
    else{
        printf("File creation Failed.\n");
        return -1;
    }
    printf("Enter the story here: ");
    gets(name);

    fprintf(fptr, "%s",name);
    fclose(fptr);

//accessing only n characters from the file

    printf("Enter number of characters to read from the file you want:\n");
    scanf("%d",&j);
    printf("enter the name of the file:\t");
    scanf("%40s", fname);

    fp=fopen(fname,"r");
    if (fread(ch,1,j,fp)==j)
        {
        ch[j] = '\0';
        puts(ch);
    }

    fclose(fp);


//reading the file
    fptr=fopen("Story.txt","r");
    printf("\nStory Information:\n");
    fscanf(fptr,"%[^\n]s",n);
    printf("story: %s\n",n);

    printf("\nEnd of file\n");
    fclose(fptr);

    return 0;
}

