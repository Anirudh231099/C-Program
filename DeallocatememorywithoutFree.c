#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int *ptr = (int*) malloc(10);

	/* we are calling realloc with size = 0 */
	realloc(ptr, 0);


	return 0;
}
