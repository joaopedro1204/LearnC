#define TAM 5
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void triangle_a(int M[][TAM]);
void triangle_b(int M[][TAM]);
void triangle_c(int M[][TAM]);
void triangle_d(int M[][TAM]);

int main(void){
    int A[TAM][TAM], i, j;

    srand(time(NULL));

    /*Fill Matrix with values between 0 and 1*/
    for (i = 0; i < TAM ; i++){
        for (j = 0; j < TAM; j++){
            A[i][j] = rand() % 10;
        }
    }

    /*Print original Matrix*/
    printf("Original Matrix\n\n");
    printf("\n");
    for (i = 0; i < TAM ; i++){
        for (j = 0; j < TAM; j++) printf("%d ", A[i][j]);
    
        printf("\n");
    }

    /*Triangle A*/
    printf("\n");
    printf("Triangle A");
    printf("\n\n");
    triangle_a(A);

    /*Triangle B*/
    printf("\n");
    printf("Triangle B");
    printf("\n\n");
    triangle_b(A);

    /*Triangle C*/
    printf("\n\n");
    printf("Triangle C");
    printf("\n\n");
    triangle_c(A);
    
    /*Triangle C*/
    printf("\n\n");
    printf("Triangle D");
    printf("\n\n");
    triangle_d(A);

    return 0;
}

void triangle_a(int M[][TAM]){
    int i, j;

    i = 0;
    while (i < TAM)
    {
        j = TAM - i - 1;
        printf("%*c", j + 1);
        while(j < TAM){
            printf("%d", M[i][j]);
            ++j;
        }

        i++;
        printf("\n");
    }
}

void triangle_b(int M[][TAM]){
    int i, j;

    i = 0;
    while (i < TAM)
    {
        j = 0;
        while(j <= TAM - 1 - i){
            printf("%d", M[i][j]);
            ++j;
        }

        i++;
        printf("\n");
    }
}

void triangle_c(int M[][TAM]){
    int i, j;

    i = 0;
    while (i < TAM)
    {
        j = 0;
        while(j <= i){
            printf("%d", M[i][j]);
            ++j;
        }

        i++;
        printf("\n");
    }
}

void triangle_d(int M[][TAM]){
    int i, j;

    i = 0;
    while (i < TAM)
    {
        j = i;
        printf("%*c", i + 1);
        while(j < TAM){
            printf("%d", M[i][j]);
            ++j;
        }

        i++;
        printf("\n");
    }
}