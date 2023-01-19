#define TAM 20
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int vet [TAM];
    int i, j, count;

    srand(time(NULL));
    count = 0;
    for (i = 0; i < TAM ; i++) vet[i] = rand() % 1000;
    for (j = 0; j< TAM; j++){
        if (vet[j] < 100) count++;
    }
    
    for (i = 0; i < TAM; i++) printf("%d  ", vet[i]);
    printf("\n%d", count);
}