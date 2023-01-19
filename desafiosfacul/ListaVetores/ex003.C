#include <stdio.h>
#include <stdlib.h>

int valida(void);

int main(void){
    int vet[10], i, maior, menor, cont_par, soma, flag, valor;

    for (i = 0; i < 10; i++){
        printf("Digite um valor para %d: ", i);
        vet[i] = valida();
    }

    soma = cont_par = maior = 0;
    menor = vet[0]; 

    for (i = 0; i < 10; i++){
        if (vet[i] > maior) maior = vet[i];
        if (vet[i] < menor) menor = vet[i];
        if (vet[i] % 2 == 0) ++cont_par;
        soma += vet[i];
    }

    printf("Maior valor: %d\n", maior);
    printf("Menor valor: %d\n", menor);
    printf("Quantos pares: %d\n", cont_par);
    printf("Soma dos valores: %d\n", soma);

    printf("O valor esta na lista: ");
    valor = valida();
    flag = 1;
    for (i = 0; i < 10; i++) {
        if (vet[i] == valor) {
            printf("O valor %d esta no vetor\n", valor);
            flag = 0;
            break;
        }
    }
    if (flag == 1) printf("O valor nao esta no vetor\n");
    
    return 0;
}

int valida(void){
    int flag;
    char a[10];
    int b;

    fgets(a, 10, stdin);
    setbuf(stdin, NULL);
    b = atoi(a);
    return b;
}