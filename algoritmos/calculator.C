#include <stdio.h>

/* Simple calculator */

int main()
{
    float n1, n2;
    char opr;

    printf("N1: ");
    scanf("%f", &n1);

    printf("N2: ");
    scanf("%f", &n2);

    printf("Operator (+, -, *, /): ");
    scanf("%s", &opr);

    switch (opr)
    {
    float result;
    
    case '+':
        result = n1 + n2;
        printf("%f", result);        
        break;
    
    case '-':
        result = n1 - n2;
        printf("%f", result);
        break;
    case '*':
        result = n1 * n2;
        printf("%f", result);
        break;
    
    case '/':
        if (n2==0) printf("Undefined");
        else{
            float result;
            result = n1 / n2;
            printf("%.2f", result);
        }
        break;
    
    default:
        printf("No valid operator recognized");
        break;
    }

    return 0;

}