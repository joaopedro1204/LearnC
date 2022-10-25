#include <stdio.h>
/* Program for inverting a four digited number */

int quotient(int a, int b);

int main(void)
{
    int n, d0, d1, d2, d3; /* n: number to be inverted */
                            /*d0, d1, d2, d3: algarisms of the number returned p */

    printf("Enter a integer number: ");
    scanf("%d", &n);

    /* Let n a four digited number, and a0, a1, a2, and a3 its algarisms in order to n = a3a2a1a0. We want to return a number p = d3d2d1d0 where a3 = d0, a2 = d1, a1 = d2, and a0 = d3.

    Firtly, we get the integer quocient of n / 1000 = a3 = d0. Then, the variable n <- n MOD 1000, hence n = a2a1a0.

    After that, we get the integer quocient of n / 100 = a2 = d1. Then, the variable n <- n MOD 100, and n = a1a0.

    n / 10 = a1 = d2, n <- n MOD 10 --> n = a0

    n = a0 = d3.

    */

    d0 = quotient(n, 1000);
    n = n % 1000;

    d1 = quotient(n, 100);
    n = n % 100;

    d2 = quotient(n, 10);
    n = n % 10;

    d3 = n;

    printf("Inverted\n");
    printf("%d%d%d%d", d3, d2, d1, d0);

    return 0;

}

int quotient(int a, int b)
{
    int q;

    q = (a - (a % b)) / b;

    return q;
}

