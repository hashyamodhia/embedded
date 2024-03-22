#include "functions.h"

void square()

{
    int n;

    printf ("Enter the value of n\n");
    scanf ("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        printf ("\nSquare of %d is %d\n", i, i*i);
    }
}
