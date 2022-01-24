#include<stdio.h>
#include<string.h>
void main()
{
    char str[10]="Welcome";
    char*p = str;
    char*q=str+(strlen(str)-1);
    while(p!=q)
    {
        char temp =*p;
        *q=*p;
        *p=temp;
        p++;
        q--;
    }
printf("%s",str);
}
