#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int n, i, qnum;
    int cont_par, cont_impar;
    float freq_par, freq_impar;

    srand(time(NULL));

    cont_impar = 0;
    cont_par = 0;

    qnum = 1000000;

    for (i = 0; i < qnum; i++)
    {
        n = rand();
        if (n % 2 == 0) cont_par++;
        else cont_impar++;

    }

    freq_par = (float) cont_par / qnum;

    freq_impar = (float) cont_impar / qnum;

    printf("Frequência de números pares: %f%%\n", freq_par * 100);
    printf("\nFrequência de números ímpares: %f%%", freq_impar * 100);

    return 0;
}

/*Executando o algortimo por diversas vezes, percebe-se que sempre há um equilíbrio entre a frequência dos valores, estando cada frequencia bem próxima de 50%.*/
