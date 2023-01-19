#include <stdio.h>

int main(void)
{
    int idade, quant_pessoas, idade_max, idade_min;
    float media_idade;
    char str;


    quant_pessoas = 0;

    media_idade = 0;

    printf("ENTRE SOMENTE COM DADOS NUMERICOS INTEIROS POSITIVOS\n");
    while (idade != 0)
    {
        printf("Digite a idade [digite 0 para interromper]: ");
        scanf("%d", &idade);

        if (idade == 0) break;

        quant_pessoas += 1;

        if (quant_pessoas == 1)
        {
            idade_max = idade_min = idade;
        }

        if (idade_max < idade) idade_max = idade;
        if (idade_min > idade) idade_min = idade;

        media_idade += idade;

    }

    media_idade = media_idade / quant_pessoas;

    printf("\nQuantidade de idades lidas: %d\n", quant_pessoas);
    printf("M%cdia das idades: %.2f\n", 130, media_idade);
    printf("Menor Idade: %d\n", idade_min);
    printf("Maior idade: %d\n", idade_max);

    return 0;
}