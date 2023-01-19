#include <stdio.h>

void Converter(int numBase10, int numBase[32]);

int main(int argc, char *argv[])
{
    int nb10, nb2[32], i, teste=1;

    while (1)
    {
        scanf("%d", &nb10);
        if (nb10 < 0) break;

        Converter(nb10, nb2);

        printf("Teste %d\n", teste++);
        printf("%d\n", nb10);
        for ( i = 0; i < 32; i++) printf("%d", nb2[i]);
        

        printf("\n\n");
    }

    return 0;
}

void Converter(int numBase10, int numBase[32])
{
    int i=31;

    while (numBase10 >= 2)
    {
        numBase[i] = numBase10 % 2;
        numBase10 = (numBase10 - (numBase10 % 2)) / 2;
        --i;
    }

    numBase[i] = 1; --i;

    for(; i>=0; --i) numBase[i] = 0;
}