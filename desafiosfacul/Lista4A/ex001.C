#include <stdio.h>

int main(void)
{
    int colun, lin, i, i2;

    printf("Quantas colunas: ");
    scanf("%d", &colun);

    printf("Quantas Linhas: ");
    scanf("%d", &lin);

    for (i = 0; i < lin; i++)
    {
        for (i2 = 0; i2 < colun; i2++)
        {
            printf("*");
        }
        printf("\n"); 
    }
    
   return 0;     
}
