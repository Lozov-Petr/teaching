#pragma warning(disable : 6031)

#include <stdio.h>
#include <math.h>

void task1()
{
    int dividend = 0;
    int divisor = 0;
    printf("Enter two numbers separated by space: ");
    scanf("%d %d", &dividend, &divisor);
    if (divisor == 0)
    {
        printf("%s", "Divisor is zero.\n");
        return 0;
    }
    int quotient = 0;
    int dividendAbs = abs(dividend);
    int divisorAbs = abs(divisor);

    while (dividendAbs - divisorAbs >= 0)
    {
        dividendAbs -= divisorAbs;
        ++quotient;
    }

    if (dividendAbs != 0 && dividend < 0)
    {
        ++quotient;
    }

    if (dividend <= 0 && divisor > 0 || dividend >= 0 && divisor < 0)
    {
        quotient = -quotient;
    }
   
    printf("The quotient of dividing %d by %d: %d.\n", dividend, divisor, quotient);
}