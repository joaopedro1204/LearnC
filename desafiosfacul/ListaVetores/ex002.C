#include <stdio.h>
#include <stdlib.h>

#define N_LIN 2
#define N_COL 3

void ler_matriz(int M[][N_COL]);
int valida(int i, int j);
void soma_matrizes(int A[][N_COL], int B[][N_COL], int C[][N_COL]);

int main(void){
    int A[N_LIN][N_COL], B[N_LIN][N_COL], C[N_LIN][N_COL];
    int i, j;

    printf("Valores nao numericos serao tratatdos como 0\n\n");
    ler_matriz(A);
    ler_matriz(B);

    
    printf("Matriz A\n");
    for (i = 0; i < N_LIN; i++){
        for (j = 0; j < N_COL; j++) printf("%d ", A[i][j]);
        printf("\n");
    }
    printf("\n");

    printf("MAtriz B\n");
    for (i = 0; i < N_LIN; i++){
        for (j = 0; j < N_COL; j++) printf("%d ", B[i][j]);
        printf("\n");
    }
    printf("\n");

    printf("soma das matrizes\n\n");
    soma_matrizes(A, B, C);
    printf("\nMatriz C\n");
    for (i = 0; i < N_LIN; i++){
        for (j = 0; j < N_COL; j++) printf("%d ", C[i][j]);
        printf("\n");
    }

    return 0;
}

void ler_matriz(int M[][N_COL]){
    int i, j;

    for (i = 0; i < N_LIN; i++)
            for (j = 0; j < N_COL; j++) M[i][j] = valida(i, j);
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

void soma_matrizes(int A[][N_COL], int B[][N_COL], int C[][N_COL]){
    int i, j;

    for (i = 0; i < N_LIN; i++)
            for (j = 0; j < N_COL; j++){ 
            C[i][j] = A[i][j] + B[i][j];
            printf("%d + %d = %d\n", A[i][j], B[i][j], C[i][j]);
            }
}