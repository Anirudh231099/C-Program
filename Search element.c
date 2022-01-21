#include<stdio.h>
int main()
{
   int a[10], n, element, pos=0,i;
   printf("Enter the array size [10]: ");
   scanf("%d", &n);
   printf("Enter array elements: ");
   for(i=0; i<n; i++)
   scanf("%d", &a[i]);
   printf("Enter element to be searched: ");
   scanf("%d",&element);

   for(i=0; i<n; i++)
   {
     if(a[i]==element)
     {
       printf("%d found at position %d", element, i+1);
       return 0;
     }
   }
   printf("%d not found.", element);
   return 0;
}
