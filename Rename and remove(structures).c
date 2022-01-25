#include<stdio.h>
void main()
{
    int successful =0;
    successful=rename("c1.txt","s1.txt");
    if (successful!=0)
    printf("\n File not renamed");
    remove("File3.txt");
}
