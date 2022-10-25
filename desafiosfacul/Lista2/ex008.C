#include <stdio.h>

int foi_aprovado(float media);

/*O programa lê uma quantidade de notas "quant_notas" lida pelo teclado e realiza um laço para lê a quantidade de notas especificada. Em seguida, calcula a média obtida e verifica se o aluno foi aprovado ou não. O algortimo de cálculo da média é análogo ao do exercício ex007*/
int main(void)
{
    int quant_notas, count;
    float nota, media;

    count = 1; /*Variável de controle do laço do-while*/
    media = 0;

    printf("Quantidade Notas: ");
    scanf("%d", &quant_notas);

    printf("(digite ponto para decimais)");
    do{
        printf("\nNota %d: ", count);
        scanf("%f", &nota);
        media = media + nota;
        count += 1;
    } while (quant_notas >= count);

    media = media / quant_notas;

    printf("\nM%cdia do aluno: %.2f\n ", 130, media);

    foi_aprovado(media);

}

/*Rotina de condicional para saber se o aluno foi aprovado ou não. O critério de aprovação era média maior ou igual a 5.*/
int foi_aprovado(float media)
{
    if (media >= 5) printf("\nO aluno foi aprovado!");
    else printf("\no aluno foi reprovado");

    return 0;
}