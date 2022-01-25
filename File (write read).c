#include<stdio.h>
int main(void)
{
FILE *fptr;
char ch;
fptr =fopen("Sample.txt","w");
printf("Enter your name: ");
while((ch=getchar())!='\n')
{
    putc(ch,fptr);
}
fclose(fptr);
fopen("Sample.txt","r");
printf("\n File Content:\n");
while((ch=getc(fptr))!=EOF){
    printf("%c",ch);
}
printf("\n End of file");
fclose(fptr);
return 0;
}
