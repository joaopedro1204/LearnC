#include <stdio.h>

#define TAM 5

int main(void){
    int A[TAM], aux1, aux2, i;

    for (i = 0; i < TAM ; i++){
        printf("Enter a number: ");
        scanf("%d", &A[i]);
        setbuf(stdin, NULL);
    }

    printf("Original Vector\n");
    for (i = 0; i < TAM ; i++) printf("%d ", A[i]);


    aux1 = A[0];
    for (i = 1; i < TAM; ++i){
        aux2 = A[i];
        A[i] = aux1;
        aux1 = aux2;
        if (i == 1) A[0] = A[TAM - 1];
    }

    printf("\nVector shifted to right\n");
    for (i = 0; i < TAM; i++) printf("%d ", A[i]);

    return 0; 
}
