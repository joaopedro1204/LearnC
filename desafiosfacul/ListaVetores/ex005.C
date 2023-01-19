#include <stdio.h>
#include <stdlib.h>
#define TAM 5

int valida(int i);
void soma(int *A, int *B, int *C);
void produto(int *A, int *B, int *C);
int diferenca(int *A, int *B, int *C);
int intersecao(int *A, int *B, int *C);
void uniao(int *A, int *B, int *C);
void imprimir(int *A, int tam);

int main(void){
    int v1[TAM], v2[TAM], v_soma[TAM], v_prod[TAM], v_diferenca[TAM], v_intersecao[TAM], v_uniao[TAM * 2], i;
    
    int tam_diferenca, tam_intersecao;

    printf("Valores nao numericos serao tratados como 0\n");
    for (i = 0; i < TAM; ++i) v1[i] = valida(i);
    puts("");
    for (i = 0; i < TAM; ++i) v2[i] = valida(i);

    puts("");
    soma(v1, v2, v_soma);
    puts("Vetor Soma");
    imprimir(v_soma, TAM);

    puts("");
    produto(v1, v2, v_prod);
    puts("Vetor Produto");
    imprimir(v_prod, TAM);

    puts("");
    uniao(v1, v2, v_uniao);
    puts("Vetor Uniao");
    imprimir(v_uniao, TAM * 2);

    puts("");
    tam_intersecao = intersecao(v1, v2, v_intersecao);
    puts("Vetor Intersecao");
    imprimir(v_intersecao, tam_intersecao);

    puts("");
    tam_diferenca = diferenca(v1, v2, v_diferenca);
    puts("Vetor Diferenca");
    imprimir(v_diferenca, tam_diferenca);

    return 0;
}

int valida(int i){
    int flag;
    char a[10];
    int b;

    printf("Digite um valor para %d: ", i);
    fgets(a, 10, stdin);
    setbuf(stdin, NULL);
    b = atoi(a);
    return b;
}

void soma(int *A, int *B, int *C){
    int i;

    for (i = 0; i < TAM; i++) C[i] = A[i] + B[i];
}

void produto(int *A, int *B, int *C){
    int i;

    for (i = 0; i < TAM; i++) C[i] = A[i] * B[i];
}

void uniao(int *A, int *B, int *C){
    int i, j;

    for (i = 0; i < TAM; i++) C[i] = A[i];

    for (j = 0; j < TAM; j++, i++) C[i] = B[j];
}

int diferenca(int *A, int *B, int *C){
    int i, j, k, flag;

    k = 0;

    for (i = 0; i < TAM; ++i){
        flag = 0;
        for (j = 0; j < TAM; ++j)
            if (A[i] == B[j]){
                flag = 1;
                break;
            }
        
        if (flag == 0){
            C[k] = A[i];
            ++k;
        }
    }

    return k;
}

int intersecao(int *A, int *B, int *C){
    int i, j, k;

    k = 0;
    for (i = 0; i < TAM; i++)
        for (j = 0; j < TAM; ++j)
            if (A[i] == B[j]){
                C[k] = A[i];
                ++k;
            }

    return k;
}

void imprimir(int *A, int tam){
    int i;

    for (i = 0; i < tam; ++i) printf("%d ", A[i]);
}