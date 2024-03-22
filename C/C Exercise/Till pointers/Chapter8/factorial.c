#include "functions.h"

int factorial (int num)
{
    int i = 1, f = 1;
    while (i <= num)
    {
        f *= i;
        i++;
    }
    return f;

}
