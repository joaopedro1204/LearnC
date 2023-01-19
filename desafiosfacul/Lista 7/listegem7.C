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

    printf("%f\n", media);

    free(pvetor);
    return 0;
}