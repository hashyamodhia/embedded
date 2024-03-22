#include "functions.h"

int isSpecialNumber(int num)
{
    int originalNum = num;
    int sum = 0;

    while (num > 0)
    {
        int digit = num % 10;
        sum += factorial(digit);
        num /= 10;
    }

    return (originalNum == sum);
}
