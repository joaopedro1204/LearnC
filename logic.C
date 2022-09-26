#include <stdio.h>

int x(int a, int b);

int main(void)
{
    
    printf("%d\n", x(1, 1));
    printf("%d\n", x(1, 0));
    printf("%d\n", x(0, 1));
    printf("%d\n", x(0, 0));

    return 0;
}

x(int a, int b)
{
    return (a && !b) || (b && !a);
}