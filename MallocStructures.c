#include<stdio.h>
#include <stdlib.h>

struct college_details

{

    int college_id;

    char *college_name;

};

int main()

{

    int i=0,n;

    char q[100];

    printf("Enter number of colleges:");

    scanf("%d",&n);

    struct college_details list[n];

    while(i<n)
        {

        printf("Id of college no %d is\n",i+1);

        scanf("%d",&list[i].college_id);

        printf("Name of college is:\n");

        scanf("%s",q);//JKTECH

        //“calloc” or “contiguous allocation” method in C is used to dynamically allocate the specified number of blocks of memory of the specified type.
        //list[i].college_name=(char*)calloc(strlen(q),1);  //1 denotes the size
        list[i].college_name=(char*)calloc(q,sizeof(char));
        strcpy(list[i].college_name,q);

            i++;

    }

    printf("College id\tCollege Name\n\n");

    for(i=0;i<n;i++){

    printf("\t%d\t%s\n",list[i].college_id,list[i].college_name);

    /*
    “free” method in C is used to dynamically de-allocate the memory.
    The memory allocated using functions malloc() and calloc() is not de-allocated on their own.
    Hence the free() method is used, whenever the dynamic memory allocation takes place.
    It helps to reduce wastage of memory by freeing it.*/
    free(list[i].college_name);

    }

    return 0;

}
