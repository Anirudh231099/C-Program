#include<stdio.h>
#include<stdlib.h>
int main()
{
    int num[100],copy[100],*p,*p1,n,i;
    printf("Enter number of elements in the array : ");
    scanf("%d",&n);
    p=&num;
    p1=&copy;
    printf("Enter array elements\n");
    for(i=0;i<n;i++)
    {
        printf("Enter elements[%d]: ",i);
        scanf("%d",&*(p+i));
    }
     printf("Array elements are : ");
     for(i=0;i<n;i++)
     {
         printf("%d\t",*(p+i));
     }
      for(i=0;i<n;i++)
      {
          *(p1+i)=*(p+i);
      }
      printf("\nCopied Array is : ");
      for(i=0;i<n;i++)
      {
          printf("%d\t",*(p1+i));
      }
      getch();
}
