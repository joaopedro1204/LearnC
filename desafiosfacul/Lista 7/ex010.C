#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i, j, temp, n, *pvetor;
    float media;

    scanf("%d", &n);

    pvetor = (int *) malloc(n * sizeof(int));

    if (!pvetor){
        puts("Sem memoria");
        return 1;
    }

    for(i = 0; i < n; i++){
        scanf("%d", pvetor + i);
    }

    media = 0.0;

    for(i = 0; i < n; i++){
        media += *(pvetor + i);
    }

    printf("%f\n", media);

    //Ordenção bolha para colocar os valores alocados na memória em ordem crescente
    for(i = n - 1; i >= 0; i--)
        for (j = 0; j < i; j++)
            if (pvetor[j] > pvetor[j + 1]){
                temp = pvetor[j];
                pvetor[j] = pvetor[j + 1];
                pvetor[j + 1] = temp;
            }
    for (i = 0; i < n; i++) printf("%d ", *(pvetor + i));
    
    free(pvetor);
    return 0;
}