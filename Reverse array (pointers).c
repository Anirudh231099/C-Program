#include<stdio.h>
#define N 5
int main()
{
    int a[N],i,*ptr;
    printf("ënter %d array elements\n",N );
    for(i=0;i<N;i++)
        scanf("%d",&a[i]);
    ptr=&a[N-1];
    for(i=0;i<N;i++)
    {
        printf("%d\n", *ptr--);
    }
    return 0;
}
