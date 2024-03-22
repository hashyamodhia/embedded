#include "functions.h"

void print ()
{
    for (float i = 1; i <= 10; i++)
    {
        printf ("Float: %.2f\n", i);
        printf ("Octal: %o\n", (int) i);
        printf ("Hexadecimal: %X\n", *(unsigned int*)&i);

        printf ("\n\n");
    }
}
