#include <stdio.h>
#include <string.h>

int main()
{
    char str[80];

    gets(str);  /*As funções gets e puts da biblioteca STRING.H servem para ler e imprimir      matrizes de caracteres em C. Contudo, elas não podem imprimir valores de outros tipos, mas isso significa que ela s também são mais velozes em execução do que printf. */
    puts(str);

    printf("O comprimento da string %c %d", 130, strlen(str));

    return 0;
}