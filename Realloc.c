#include <stdio.h>
#include <stdlib.h>

int main(void) {

  // character pointer
  char *cptr = NULL;

  // allocate memory
  cptr = (char *) malloc (6 * sizeof(char));

  // if failed
  if (cptr == NULL) {
    printf("Failed to allocate memory space. Terminating program...");
    return -1;
  }

  // get some text
  printf("Enter 5 letters word: ");
  scanf("%s", cptr);

  // display
  printf("Word you entered: %s\n", cptr);

  // reallocate memory
  cptr = realloc(cptr, (9 * sizeof(char)));

  // if failed
  if (cptr == NULL) {
    printf("Failed to reallocate new memory space. Terminating program...");
    return -1;
  }

  // content
  printf("\nContent of the allocated memory space after reallocation:\n");
  printf("%s\n\n", cptr);

  // get some new text
  printf("Enter 8 letters word: ");
  scanf("%s", cptr);

  // display
  printf("Word you entered: %s\n", cptr);

  // free memory space
  free(cptr);

  return 0;
}
