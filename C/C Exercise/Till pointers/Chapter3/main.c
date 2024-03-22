#include "functions.h"

int main()
{
    int a, b;
    printf ("Even odd between 1 to 25\n");
    even();
    odd();

    printf ("\nPass by value\n");
    printf ("Enter A and B:\n");
    scanf ("%d %d", &a, &b);
    printf ("Before Swapping A: %d B: %d\n", a, b);
    using_value();
    printf ("After Swapping A: %d B: %d", a, b);

    printf ("\nUsing arithmetic operators(+ -)\n");
    arithmetic1();

    printf ("\nUsing arithmetic operators(* /)\n");
    arithmetic2();

    printf ("\nUsing logical operators\n");
    logical();

    printf ("\nPass by referance\n");

    printf ("Enter A and B:\n");
    scanf ("%d %d", &a, &b);
    printf ("Before Swapping A: %d B: %d\n", a, b);
    using_pointers (&a, &b);
    printf ("After Swapping A: %d B: %d\n", a, b);

    printf ("Number of positive negative numbers\n");
    positive_negative();

    printf ("Sum of Odd numbers\n");
    sum_of_odd();

    printf ("Sum of Even numbers\n");
    sum_of_even();

    printf ("Square of the integers are\n");
    square();

    printf ("Divisible by 7\n");
    divisible_by_7();

    printf ("Password program\n");
    pass();

    return 0;
}
