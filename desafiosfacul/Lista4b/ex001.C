#include <stdio.h>

int main(void)
{
    int i;

    i = 1;

    while (i <= 20)
    {
        if (i == 2){
            i++;
            continue;
        } 
        if (i == 5) break;
        printf("i = %d\n", i);
        i++;
    }
    
    return 0;
}