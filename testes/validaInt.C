#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int validate_int(char* str)
{
    if (!strcmp(str, "0")) return 0;

    else if (!atoi(str)) return -1;

    else return atoi(str);
}

float validate_float(char* str)
{
    if (!strcmp(str, "0") || !strcmp(str, "0.0")) return 0.0;

    else if(!atof(str)) return -1;

    else return atof(str);
}

int main(void)
{
    char str[10];
    float num;

    printf("Enter: ");
    scanf("%s", str);

    while ((num = validate_float(str)) < 0)
    {
        printf("Enter again: ");
        scanf("%s", str);
    }

    printf("Number: %.2f", num);
   
    return 0;    
}

