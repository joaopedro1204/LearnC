#include <stdio.h>

/*Realiza o Somátório de 0 até um número inteiro n lido pelo teclado*/
int main(void)
{
    int n, somatorio;

    printf("Soma de 0 a (digite um número natural): ");
    scanf("%d", &n);

    somatorio = n * (n + 1) / 2; /*Fórmula de soma de termos de uma PA cujo termo a1 = 1 e de razão 1*/

    printf("O somatorio entre 0 e %d %c %d", n, 130, somatorio);

    return 0;
}