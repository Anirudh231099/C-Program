#include <conio.h>
#include <stdio.h>
#include <string.h>
// C program for reading
int main()
{
    FILE *fs=fopen("hello.csv","r");
    if(fs==NULL)
    {
    perror("Error");
    exit(1);
    }
    char line[200];
    while(fgets(line,sizeof(line),fs))
    {
        char *token;
        token=strtok(line,",");
        while(token!=NULL)
        {
            printf("%-12s",token);
            token=strtok(NULL,",");
        }
        printf("\n");
        }
    }



    // C program for Writing and appending

//#include <conio.h>
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//    // Substitute the file_path string
//    // with full path of CSV file
//    FILE* fp = fopen("hello.csv", "a+"); //w+
//
//    char name[50];
//    int accountno, amount;
//
//    if (!fp) {
//        // Error in file opening
//        printf("Can't open file\n");
//        return 0;
//    }
//
//    // Asking user input for the
//    // new record to be added
//    printf("\nEnter Account Holder Name\n");
//    scanf("%s", &name);
//    printf("\nEnter Account Number\n");
//    scanf("%d", &accountno);
//    printf("\nEnter Available Amount\n");
//    scanf("%d", &amount);
//
//    // Saving data in file
//    fprintf(fp, "%s, %d, %d\n", name,accountno, amount);
//    printf("\nNew Account added to record");
//
//    fclose(fp);
//    return 0;
//}
