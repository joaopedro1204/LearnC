#include <stdio.h>
#define TAM 2

void transport(int M[][TAM]);

int main(void){
    int i, j, A[TAM][TAM];

    for (i = 0; i < TAM ; i++){
        for (j = 0; j < TAM; j++){
            printf("Enter a number for %d,%d: ", i, j);
            scanf("%d", &A[i][j]);
            setbuf(stdin, NULL);
        }
    }

    transport(A);
    
    for (i = 0; i < TAM ; i++){
        for (j = 0; j < TAM; j++) printf("%d ", A[i][j]);
    
        printf("\n");
    }

    return 0;
}

void transport(int M[][TAM]){
    int k, i, aux;

    k = 0;

    while (k < TAM){
        i = k;
        while (i < TAM)
        {
            aux = M[i][k];
            M[i][k] = M[k][i];
            M[k][i] = aux;
            i++;
        }
        k++;        
    }
}