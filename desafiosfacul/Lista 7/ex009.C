#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i, n, *pvetor;
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
    media /= n;
    printf("%f\n", media);

    printf("Valores maiores do que a media: ");
    for(i = 0; i < n; i++) 
        if (pvetor[i] > media) printf("%d ", pvetor[i]);

    free(pvetor);
    return 0;
}