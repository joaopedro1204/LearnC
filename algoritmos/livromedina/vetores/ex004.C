#define TAM 80
#include <stdio.h>
#include <string.h>

int main(void){
    char str[TAM];
    int i, count_vog;

    printf("Enter something: ");
    gets(str);

    for (i = count_vog = 0; i < strlen(str); ++i)
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u') count_vog ++;

    printf("The string has %d vogals", count_vog);

    return 0;
}