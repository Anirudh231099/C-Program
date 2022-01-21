#include<stdio.h>
int main()
{
    int array[10], position, i, n, value;
    printf("\n\nEnter number of elements in array:");
    scanf("%d", &n);

    printf("\n\nEnter %d elements\n", n);
    for(i=0; i<n; i++)
        scanf("%d", &array[i]);

    printf("\n\nEnter the location where you want to insert new element:  ");
    scanf("%d", &position);

    printf("\n\nEnter the value to insert: ");
    scanf("%d", &value);

    for(i = n-1; i >= position-1; i--) //right
        array[i+1] = array[i];

    array[position - 1] = value;

    printf("\n\nResultant array is: ");
    for(i = 0; i <= n; i++)
        printf("%d  ", array[i]);

    return 0;
}
