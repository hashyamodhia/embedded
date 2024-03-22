#include "function.h"

void print_e_using_astrick()

{
    int i;

    for (i = 0; i < 10; i++)

        printf ("*");

    for (i = 0; i < 5; i++)

        printf ("*\n");

    for (i = 0; i < 10; i++)

        printf ("*");

    for (i = 0; i < 5; i++)

        printf ("*\n");

    for (i = 0; i < 10; i++)

        printf ("*");

}

void print_hello()

{
    char c[5] = "HELLO";

    for (int i = 0; i < 5; i++)
    {
        printf ("\n%c\n", c[i]);
    }

    printf ("\n");

     for (int i = 0; i < 5; i++)
    {
        printf ("%c ", c[i]);
    }
    printf ("\n");
}

void print_data_types_size()

{
    printf ("Size of char = %lu bytes\n", sizeof(char));
    printf ("Size of int = %lu bytes\n", sizeof(int));
    printf ("Size of float = %lu bytes\n", sizeof(float));
    printf ("Size of long = %lu bytes\n", sizeof(long));
    printf ("Size of double = %lu bytes\n", sizeof(double));
    printf ("Size of long double = %lu bytes\n", sizeof(long double));
}
