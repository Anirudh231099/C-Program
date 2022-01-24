#include<stdio.h>

int main()
{
char str[]="abcdefgh";
int i=0;
int n=7;
char temp;
char *ptr;
ptr=str;
while(i<n)
{
temp=ptr[i];
ptr[i]=ptr[n];;
ptr[n]=temp;
i++;
n--;
}
printf("reverse of string is %s\n",ptr);
}
