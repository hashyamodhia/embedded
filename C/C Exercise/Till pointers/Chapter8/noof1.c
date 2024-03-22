#include "functions.h"

int noof1 (int num)
{
    int count = 0;
    while (num != 0)
        {
            int digit = num % 10;
            if (digit == 1)
            {
                count++;
            }
            num /= 10;
        }
        return count;
}
