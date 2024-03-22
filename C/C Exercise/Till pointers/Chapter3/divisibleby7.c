#include "functions.h"

void divisible_by_7()
{
    for (int i = 1; i <= 50; i++)
    {
        if (i % 7 == 0)
        {
            printf ("\n%d\n", i);
        }
    }
}
