#include <stdio.h>

int main(void)
{
    int cod, valor;
    
    printf("< CONVERS%cO DE BASES >\n1: decimal para hexadecimal\n2: haxadecimal para decimal\n3: decimal para octal\n4: ocatl para decimal\n5: encerra\n");

    cod = 0;
    while (cod != 5)
    {   
        printf("\nEntre com o c%cdigo: ", 162);
        scanf("%d", &cod);

        switch (cod)
        {
            case 1:
                printf("Entre com o valor: ");
                scanf("%d", &valor);

                printf("%X\n", valor);
                break;

            case 2:
                printf("Entre com o valor: ");
                scanf("%X", &valor);

                printf("%d\n", valor);
                break;

            case 3: 
                printf("Entre com o valor: ");
                scanf("%d", &valor);

                printf("%o\n", valor);
                break;
            
            case 4:
                printf("Entre com o valor: ");
                scanf("%o", &valor);

                printf("%d\n", valor);
                break;

            case 5:
                break;

            default:
                printf("A Entrada n%co %c v%clida", 198, 130, 160);
                break;
        }
    }

    return 0;
}