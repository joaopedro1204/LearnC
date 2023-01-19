#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define TAM 6


void read_matrix_int(int *M);
void read_matrix_op(char *M);
int operation(int *M, int *N, char *P, int *Q);
void print_matrix_int(int *M);
void print_matrix_op(char *M);


int main(void){
   int A[TAM], B[TAM], D[TAM];
   char C[TAM];

   read_matrix_int(A);
   read_matrix_int(B);
   read_matrix_op(C);

   print_matrix_int(A);
   print_matrix_int(B);
   print_matrix_op(C);

   operation(A, B, C, D);

   print_matrix_int(D);

  return 0;

}

void read_matrix_int(int *M){
    int i;
    char a[100];

    for (i = 0; i < TAM; i++){
        printf("Enter the element %d of array: ", i);
        gets(a);
        setbuf(stdin, NULL);
        M[i] = atoi(a);
    }

    printf("\n");
}

void read_matrix_op(char *M){
    int i;
    for (i = 0; i < TAM; i++){
        printf("Enter an operation: ");
        scanf("%c", &M[i]);
        setbuf(stdin, NULL);
    }
}

int operation(int *M, int *N, char *P, int *Q){
    int i, result;

    for (i = 0; i < TAM; i++) switch (P[i])
    {
    case '+':
        Q[i] = M[i] + N[i];
        break;

    case '-':
        Q[i] = M[i] - N[i];
        break;

    case '*':
        Q[i] = M[i] * N[i];
        break;

    case '/':
        Q[i] = M[i] / N[i];
        break; 
       
    default:
        break;
    }
}

void print_matrix_int(int *M){
    int i;

    for (i = 0; i < TAM ; i++) printf("%d ", M[i]);

    printf("\n");
}

void print_matrix_op(char *M){
    int i;

    for (i = 0; i < TAM; i++) printf("%c ", M[i]);

    printf("\n");
}