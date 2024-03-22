#include "functions.h"

void using_value(int x, int y)
{
    int temp;

    temp = x;
    x = y;
    y = temp;
}

void arithmetic1()
{
    int a = 7, b = 10;

    printf ("\nBefore Swapping\n");
    printf ("A = %d\n", a);
    printf ("B = %d\n", b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf ("\nAfter Swapping\n");
    printf ("A = %d\n", a);
    printf ("B = %d\n", b);

}

void arithmetic2()
{
    int a = 7, b = 10;

    printf ("\nBefore Swapping\n");
    printf ("A = %d\n", a);
    printf ("B = %d\n", b);

    a = a * b;
    b = a / b;
    a = a / b;

    printf ("\nAfter Swapping\n");
    printf ("A = %d\n", a);
    printf ("B = %d\n", b);

}

void logical()
{
    int a = 7, b = 10;

    printf ("\nBefore Swapping\n");
    printf ("A = %d\n", a);
    printf ("B = %d\n", b);

    a = a ^ b;
    b = a ^ b;
    a = a ^ b;

    printf ("\nAfter Swapping\n");
    printf ("A = %d\n", a);
    printf ("B = %d\n", b);

}

void using_pointers(int *a, int *b)
{
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}
