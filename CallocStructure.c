#include <stdio.h>
#include <stdlib.h>

int main(void) {

  // student structure
  struct student {
    char id[10];
    char firstname[64];
    char lastname[64];
    int score;
  };

  // new type
  typedef struct student candidate;

  // student structure pointer
  candidate *sptr;
  candidate *tmp;

  // variables
  int no_of_students = 3;
  int i;

  // allocate memory blocks
  sptr = (candidate *) calloc (no_of_students, sizeof(candidate));

  // get student details
  for(i = 0, tmp = sptr; i < no_of_students; i++, tmp++) {
    printf("Enter detail of student #%d\n", (i+1));
    printf("ID: ");
    scanf("%s", tmp->id);
    printf("First Name: ");
    scanf("%s", tmp->firstname);
    printf("Last Name: ");
    scanf("%s", tmp->lastname);
    printf("Score: ");
    scanf("%d", &tmp->score);
  }

  // display student details
  printf("\n\nFollowing are the student details:\n\n");
  for(i = 0, tmp = sptr; i < no_of_students; i++, tmp++) {
    printf("Detail of student #%d\n", (i+1));
    printf("ID: %s\n", tmp->id);
    printf("First Name: %s\n", tmp->firstname);
    printf("Last Name: %s\n", tmp->lastname);
    printf("Score: %d\n", tmp->score);
  }

  // free memory location
  free(sptr);

  return 0;
}
