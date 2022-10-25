#include <stdio.h>

int main()
{
    int start, target;
    int *p;

    start = 10;

    p = &start; /* p é o ponteiro (endereço de variável de memória) da variável start */

    target = *p; /* target recebe o valor contido no ponteiro p */

    printf("%d", target); /* o valor 10 será mostrado na tela */

    return 0;

}