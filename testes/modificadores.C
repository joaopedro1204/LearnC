#include <stdio.h>

int main(void)
{
    int i = 1;
    float f = 2.0;
    char a = 'a';
    double d = 4.0E-30;

    long int li = 10000000;
    signed long int sli = -1500000;
    unsigned long int uli = 100;

    short int si = 2;
    signed short int ssi = -13;
    unsigned short int usi = 12;

    signed int Si = -1;
    unsigned int ui = 56;

    unsigned char uc = '1';
    signed char sc = '3';

    long double ld = 2.0e10;

    printf("%d\n", i);
    printf("%f\n", f);
    printf("%c\n", a);
    printf("%g\n", d);

    printf("\n");

    printf("Tamnho int: %d bytes\n", sizeof(i));
    printf("Tamanho float: %d bytes\n", sizeof(f));
    printf("Tamanho char: %d bytes\n", sizeof(a));
    printf("Tamanho double: %d bytes\n", sizeof(d));

    printf("Tamanho long int: %d bytes\n", sizeof(li));
    printf("Tamanho signed long int : %d bytes\n", sizeof(sli));
    printf("Tamanho unsigned long int  : %d bytes\n", sizeof(uli));
    printf("Tamanho short int: %d bytes\n", sizeof(si));
    printf("Tamanho signed short int : %d bytes\n", sizeof(ssi));
    printf("Tamanho unsigned short int: %d bytes\n", sizeof(usi));
    printf("Tamanho signed int: %d bytes\n", sizeof(Si));
    printf("Tamanho unsigned int: %d bytes\n", sizeof(ui));
    printf("Tamanho unsigned char: %d bytes\n", sizeof(uc));
    printf("Tamanho signed char: %d bytes\n", sizeof(sc));
    printf("Tamanho long double: %d bytes\n", sizeof(ld));

    return 0;
    
}