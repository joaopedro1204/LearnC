#include <stdio.h>

int main(void)
{
    float l1, l2, l3;

    printf("Enter side L1: ");
    scanf("%f", &l1);

    printf("Enter side L2: ");
    scanf("%f", &l2);

    printf("Enter side L3: ");
    scanf("%f", &l3);

    if ((l1+l2<=l3) || (l1+l3<=l2) || (l2+l3<=l1)) printf("Its not a triangle!");

    else{
        if (l1==l2){
            if (l2==l3) printf("The Triangle is equilateral");

            else printf("The Trinalge is isosceles");
        }
        else if (l1==l3) printf("The traingle is isosceles");

        else printf("The traingle is scalene");
    }
    return 0;
}