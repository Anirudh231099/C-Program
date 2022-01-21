#include <stdio.h>
#include <string.h>
int main() {
    char *x[] = {"abb", "bcc", "cdd"};
    char *s = "bb";
    int i = 0;
    while(x[i]) {
        if(strcmp(x[i], s) == 0) {
            printf("String found\n");
            break;
        }
        else{
            printf("Not found\n");
            break;
        }
        i++;
    }
}
