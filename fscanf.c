#include <stdio.h>
void main()
{
   FILE *fp;
   char a[200];
   fp = fopen("fscanf.txt", "r");
   while(fscanf(fp, "%s", a)!=EOF)
   {
    printf("%s ", a );
   }
   fclose(fp);
}

