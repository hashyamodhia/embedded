#include "functions.h"

void sum_of_even()

{
    int n[8], sum = 0;

    printf ("Enter 8 numbers\n");

    for (int i = 0; i < 8; i++)
    {
        scanf ("%d", &n[i]);
        if (n[i] % 2 == 0)
        {
            sum = sum + n[i];
        }

    }
    printf ("Sum of even numbers is: %d\n", sum);
}
