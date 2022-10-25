#include <stdio.h>

/*Lê as notas de uma prova e três testes e retorna o cálculo da média obtida pelo aluno */
int main(void)
{
    float prova, t1, t2, t3, media;
    
    printf("(digite ponto para decimais)\n");
    printf("Prova: ");
    scanf("%f", &prova);

    printf("Teste 1: ");
    scanf("%f", &t1);
    
    printf("Teste 2: ");
    scanf("%f", &t2);
    
    printf("Teste 3: ");
    scanf("%f", &t3);

    media = 0.8 * prova + 0.2 * ((t1 + t2 + t3) / 3);

    printf("Nota final: %.2f", media);

    return 0;
}