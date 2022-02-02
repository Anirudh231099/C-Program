#include <stdio.h>
#include <stdlib.h>
int main(){
    int num;
    float *d;
    printf("Enter the total number of elements: ");
    scanf("%d", &num);

    d = (float*)malloc(num *sizeof(float));
    if (d == NULL)
    {
        printf("Memory not allocated.");
        exit(0);
    }

    for (int i = 0; i < num; i++)
    {
        printf("Enter Number %d: ", i + 1);
        scanf("%f", d + i);
    }

    for (int i = 1; i < num; i++)
    {
        if (*d < *(d + i))
            *d = *(d + i);
    }

    printf("Largest number = %f", *d);
    free(d);
    return 0;

}
