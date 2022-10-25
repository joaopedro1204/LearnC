#include <stdio.h>

int foi_aprovado(float media);

int main(void)
{
    float n1, n2, media;

    printf("Entre com a nota 1: ");
    scanf("%f", &n1);

    printf("\nEntre com a nota 2: ");
    scanf("%f", &n2);

    media  = (n1 + n2) / 2;

    printf("\nA m%cdia do aluno foi %.2f\n", 130, media);

    foi_aprovado(media);

    return 0;
}

int foi_aprovado(float media)
{
    if (media >= 5) printf("\nO aluno foi aprovado!");
    else printf("\no aluno foi reprovado");

    return 0;
}