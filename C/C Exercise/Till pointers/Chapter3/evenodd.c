#include "functions.h"

void even()
{
    printf ("Even numbers between 1 to 25:\n\n");
    for (int i = 1; i <= 25; i++)
        if (i % 2 == 0)
        printf ("%d\n", i);
    printf ("\n");
}

void odd()
{
    printf ("Odd numbers between 1 to 25:\n\n");
    for (int i = 1; i <= 25; i++)
        if (i % 2)
        printf ("%d\n", i);
}
