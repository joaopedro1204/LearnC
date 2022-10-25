#include <stdio.h>
#include <conio.h>

/*int main(void)
{
    char ch;

    do{
        printf("\nEnter a char (enter '.' to stop): ");
        ch = getchar();
        putchar(ch);

    } while (ch != '.');
} */

int main()
{
    char ch;

    do{
        printf("\nEnter a char: "); /*a função getch recebe um caractere, mas não mostra que caractere fora digitado. Já getche mostra o caractere que foi digitado. Ambas não esperam o retorno de carro, e a leitura é feita assim que o primeiro caractere é digitado */
        ch = getch();
        printf("\n");
        putchar(ch);
        printf("\n");
    }while (ch != '.');
}