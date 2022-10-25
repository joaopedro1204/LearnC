#include <stdio.h>

/*Lê duas datas no formato dd/mm/aaaa e determina qual é a data mais antiga. Caso as datas sejam iguais, o prgrama imprimirá "Mesmo dia"*/
int main(void)
{
    int d1, m1, a1;
    int d2, m2, a2;

    printf("Escreva a Primeira data no formato dd/mm/aaaa: \n");
    scanf("%d/%d/%d", &d1, &m1, &a1);

    printf("Escreva a Segunda data no formato dd/mm/aaaa: \n");
    scanf("%d/%d/%d", &d2, &m2, &a2);

    if (a1>a2) 
        printf("Segundo");
        else if (a1!=a2) 
            printf("Primeiro");
            else if (m1>m2)
                printf("Segundo");
                else if (m1!=m2)
                    printf("Primeiro");
                    else if (d1>d2)
                        printf("Segundo");
                        else if (d1!=d2)
                            printf("Primeiro");
                            else printf("Mesmo dia");
    return 0;
    
}