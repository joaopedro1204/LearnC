#include <stdio.h>

int main(void)
{
    int lin, i, i2, count;

    printf("Quantas linhas: ");
    scanf("%d", &lin);

    count = lin;
    for (i = 0; i < lin; i++)
    {
        for (i2 = count; i2 >= 1; --i2)
        {
            printf("*");
        }
        printf("\n");
        count -= 1;
    }

    return 0;
    
}