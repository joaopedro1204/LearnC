#include <stdio.h>

int foi_aprovado(float media);

/*O programa lê três notas e calcula a média obtida. O algoritmo utilizado lê a nota pelo teclado e soma o seu valor ao da variável "media", por fim dividindo o valor de "media" por três e obtendo a média final.*/
int main(void)
{
    float nota, media;

    media = 0;

    printf("(digite ponto para decimais)\n");
    printf("Entre com a nota 1: ");
    scanf("%f", &nota);
    media = nota;

    printf("\nEntre com a nota 2: ");
    scanf("%f", &nota);
    media = media + nota;

    printf("\nEntre com a nota 3: ");
    scanf("%f", &nota);
    media = media + nota;


    media  = media / 3;

    printf("\nA m%cdia do aluno foi %.2f\n", 130, media);

    foi_aprovado(media);

    return 0;
}

/*Rotina de condicional para saber se o aluno foi aprovado ou não. O critério de aprovação era média maior ou igual a 5.*/
int foi_aprovado(float media)
{
    if (media >= 5) printf("\nO aluno foi aprovado!");
    else printf("\no aluno foi reprovado");

    return 0;
}