#include "functions.h"

void a_z()
{
    for (char c = 'A'; c <= 'Z'; c++)
    {
        printf ("Decimal value of %c: %d\n", c, c);

        printf ("Hexadecimal value of %c: %02X\n\n", c, c);

    }
}
