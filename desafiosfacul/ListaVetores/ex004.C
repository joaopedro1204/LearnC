#include <stdio.h>
#include <stdlib.h>
#define TAM 5

void ler_matriz(int M[][TAM]);
int valida(int i, int j);
void multiplica_matriz(int A[][TAM], int B[][TAM], int C[][TAM]);

int main(void){
    int A[TAM][TAM], B[TAM][TAM], C[TAM][TAM];
    int i, j;

    printf("Valores nao numericos serao tratatdos como 0\n\n");
    ler_matriz(A);
    ler_matriz(B);

    multiplica_matriz(A, B, C);

    for (i = 0; i < TAM; i++){
        for (j = 0; j < TAM; j++) printf("%d ", C[i][j]);
        printf("\n");
    }

    return 0;

}

void ler_matriz(int M[][TAM]){
    int i, j;

    for (i = 0; i < TAM; i++)
            for (j = 0; j < TAM; j++) M[i][j] = valida(i, j);
    printf("\n");
}

int valida(int i, int j){
    int flag;
    char a[10];
    int b;

    printf("Digite um valor para %d %d: ", i, j);
    fgets(a, 10, stdin);
    setbuf(stdin, NULL);
    b = atoi(a);
    return b;
}

void multiplica_matriz(int A[][TAM], int B[][TAM], int C[][TAM]){
    int i, j, k;

    for (i = 0; i < TAM; ++i){
        for (j = 0; j< TAM; ++j){
            C[i][j] = 0;
            for (k = 0; k < TAM; ++k) C[i][j] = A[i][k] * B[k][j] + C[i][j];
        }
    }
}