#include <stdio.h>

// Swap using pointers to a function
void swap(int *x, int *y)
{
    if (*x == *y) {     // Check if the two addresses are the same
        return;
    }

    *x = *x + *y;
    *y = *x - *y;
    *x = *x - *y;
}

int main()
{
    int x = 4, y = 7;
    swap(&x, &y);
    printf("\n the value of x is :%d and the value of y is: %d", x, y);

    return 0;
}
