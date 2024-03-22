#include "functions.h"

int factorial(int digit)
{
    int fact = 1;

    for (int i = 1; i <= digit; i++)
    {
        fact *= i;
    }

    return fact;
}
