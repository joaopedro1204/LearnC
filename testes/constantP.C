#include <stdio.h>

int main()
{
    const int a = 23;  /* Const variables can only be atributed one time. Any other try of      changing its value will result in error by compilor */

    ++a; /* this line will generate an erro */

    printf("%i", a);

    return 0;
}