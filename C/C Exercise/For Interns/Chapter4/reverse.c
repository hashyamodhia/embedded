#include "functions.h"

int rev (int a)
{
    int num1, num2, num3;
    num1 = a % 10;
    num2 = num1 * 10;
    num3 = a / 10;
    int reversed = num3 + num2;

    return reversed;
}
