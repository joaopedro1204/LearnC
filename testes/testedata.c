#include <stdio.h>
#include <time.h>

int main(void)
{
    struct tm *p;
    time_t t;

    char str[20];

    t = time(NULL);
    p = localtime(&t);

    strftime(str, 20, "São %d/%m/%Y", p);
    printf(str);

    return 0;
}