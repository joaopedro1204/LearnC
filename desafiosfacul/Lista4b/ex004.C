#include <stdio.h>

int main(void)
{
    float total;
    int cliente;

    printf("Entre com o valor total da compra: ");
    scanf("%f", &total);

    printf("[1] CLIENTE COMUM\n[2] FUNCION%cRIO\n[3] CLIENTE VIP\nEntre com c%cdigo do cliente: ", 181, 162);
    scanf("%d", &cliente);

    switch (cliente)
    {
    case 2:
        total *= 0.9;
        printf("O total da compra com desconta para FUNCION%cRIO: %.2f", 160, total);
        break;

    case 3:
        total *= 0.95;
        printf("O total da compra com desconto para CLIENTE VIP: %.2f", total);
        break;

    case 1:
        printf("Total para CLIENTE COMUM: %.2f", total);
        break;
    
    default:
        break;
    }

    return 0;
}