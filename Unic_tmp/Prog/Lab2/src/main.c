#include <stdio.h>
#include <stdlib.h>
#include "IntVector.h"

int main(int argc, char *argv[])
{
    int_vector_pop_back(argv[1]);
        argv[1]->arr[argv[1]->size - 1] = 0;
        argv[1]->size--;
    }
    printf("\n-- pop_back --");
    printf("%s", argv[1]);
    return 0;
}


/*
int main(int argc, char *argv[])
{
    int_vector_pop_back(argv[1]);
    printf("\n-- pop_back --");
    printf("%s", argv[1]);
    return 0;
}

*/
