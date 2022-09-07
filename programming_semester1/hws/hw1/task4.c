#pragma warning(disable : 6031)

#include <stdio.h>
#include <stdlib.h>

void task4()
{

    float x;

    printf("Enter X: ");
    scanf("%f", &x);

    float xSquare = x * x;
    float result = xSquare * (xSquare + x + 1) + x + 1;
    printf("X^4 + X^3 + X^2 + X + 1 = %f\n", result);
}
