#include <stdio.h>

int main(void)
{
    float x, z, b;

    int y, a, c;

    x = 6.0;
    y = 2;
    z = 4.0;

    a = 8;
    b = 7.5;
    c = 12;

    printf("%f \n", (z / a) + b * --y);

    return 0;
}