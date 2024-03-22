#include "functions.h"


int square(int n)

{
    int sum = 0;
    int seq;
    int j = 2;

    for (int i = 1; i <= n; i++)
    {
       seq += printf ("%d^%d + ", i, j);

       sum = sum + pow(i,j);
    }
    printf ("\n");

    printf ("Sum is: %d \n", sum);

}
