#include <stdio.h>
int main()
{
    int a = 0;
    double d = 10.21;
    int arr[] = { 1, 2, 3, 4, 7, 98, 0, 12, 35, 99, 14 };
    printf("Number of elements:%lu ", sizeof(arr) / sizeof(arr[0]));
    printf("%lu", sizeof(a + d));
    printf("%lu\n", sizeof(char));
    printf("%lu\n", sizeof(int));
    printf("%lu\n", sizeof(float));
    printf("%lu", sizeof(double));
    return 0;
}
