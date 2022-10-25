#include <stdio.h>

int main(void)
{
    int a, b, s;

    a = 10;
    b = 20;

    s = a++;

    printf("%d %d", s, a);

    return 0;
}
