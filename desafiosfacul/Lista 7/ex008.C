#include <stdio.h>
#include <stdlib.h>

int main(void) {
    size_t maior_size = 1;
    void *ptr = NULL;

    size_t size = 1;

    while ((ptr = malloc(size))) 
    {
        maior_size = size;

        size *= 8;
        free(ptr);
    }

    printf("Maximo alocado %llu bytes.\n", maior_size);

    return 0;
}