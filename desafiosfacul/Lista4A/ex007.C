#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    float x, y; 
    float exp;
    int i, qnum, dentro;

    srand(time(NULL));

    qnum = 9999999; /*Quantidade de pontos que serão gerados*/

    dentro = 0;

    for (i = 0; i<qnum; i++)
    {
        x = (float) rand() / RAND_MAX; /*gera uma abscissa entre 0 e 1*/

        y = (float) rand() / RAND_MAX; /*gera uma ordenada entre 0 e 1*/

        if (y * y + x * x <= 1) ++dentro; /*Se o ponto estiver dentro do 1/4 de círculo com raio 1 e centro na origem, então o contador dentro é incrementado em 1*/
    }

    exp = (float) (4 * dentro) / qnum; /*Expressão que irá gerar o valor próximo de pi*/

    printf("%d\n", dentro);
    printf("Expressão: %f", exp);

    return 0;
}