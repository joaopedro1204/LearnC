#include <stdio.h>

int main(void)
{
    int cont;
    float nota, media;

    cont = media = 0;
    while (nota >= 0)
    {
        printf("Entre com a nota: ");
        scanf("%f", &nota);

        if (nota < 0) break;

        media += nota;
        cont += 1;
    }

    media = media / cont;

    printf("A m%cdia foi: %f", 130, media);

    return 0;
    
}