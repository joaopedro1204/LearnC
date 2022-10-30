#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int n, i, qnum;
    int max = 7;
    int cont1, cont2, cont3, cont4, cont5, cont6;
    float freq1, freq2, freq3, freq4, freq5, freq6;
    
    srand(time(NULL));

    qnum  = 6000000;
    cont1 = cont2 = cont3 = cont4 = cont5 = cont6 = 0;

    for (i = 0; i<qnum; ++i)
    {
        n = rand();
        n = n % max;

        if (n == 0){
            i--;
            continue;
        }
        
        switch (n)
        {
        case 1:
            cont1++;
            break;
        
        case 2:
            cont2++;
            break;

        case 3:
            cont3++;
            break;

        case 4:
            cont4++;
            break;

        case 5:
            cont5++;
            break;

        case 6:
            cont6++;
            break;
        
        default:
            break;
        }

    }

    freq1 = (float) cont1 / qnum;
    freq2 = (float) cont2 / qnum;
    freq3 = (float) cont3 / qnum;
    freq4 = (float) cont4 / qnum;
    freq5 = (float) cont5 / qnum;
    freq6 = (float) cont6 / qnum;

    printf("Frequencia de 1: %f%%\n", freq1 * 100);
    printf("Frequencia de 2: %f%%\n", freq2 * 100);
    printf("Frequencia de 3: %f%%\n", freq3 * 100);
    printf("Frequencia de 4: %f%%\n", freq4 * 100);
    printf("Frequencia de 5: %f%%\n", freq5 * 100);
    printf("Frequencia de 6: %f%%\n", freq6 * 100);


    return 0;
}

/*Observando os resultados em diversa execuções, percebe-se que a frequência de todos os casos tende a estar em cerca de 16,6%*/