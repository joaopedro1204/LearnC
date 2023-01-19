#include <stdio.h>
#define TAM 6

int main(void){
    int A[TAM], aux1, aux2, i;

    for (i = 0; i < TAM ; i++){
        printf("Enter a number: ");
        scanf("%d", &A[i]);
        setbuf(stdin, NULL);
    }

    printf("Original Vector\n");
    for (i = 0; i < TAM ; i++) printf("%d ", A[i]);


    aux1 = A[TAM - 1];
    for (i = TAM - 2; i >= 0; --i){
        aux2 = A[i];
        A[i] = aux1;
        aux1 = aux2;
        if (i == TAM - 2) A[TAM - 1] = A[0];
    }

    printf("\nVector shifted to left\n");
    for (i = 0; i < TAM; i++) printf("%d ", A[i]);

    return 0; 
}