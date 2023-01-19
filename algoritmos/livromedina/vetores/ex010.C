#include <stdio.h>
#define TAM 4

int main(void){
    int A[TAM][TAM], i, j;

    for (i = 0; i < TAM ; i++){
        for (j = 0; j < TAM; j++){
            printf("Enter a number for %d,%d: ", i, j);
            scanf("%d", &A[i][j]);
            setbuf(stdin, NULL);
        }
    }

    printf("The elements of main diagonal are: \n");
    for (i = 0; i < TAM; ++i) printf("%d ", A[i][i]);

    return 0;

}