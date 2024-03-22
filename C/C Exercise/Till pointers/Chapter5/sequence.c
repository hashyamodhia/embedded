#include "functions.h"
#include <math.h>

int sequence(int l)

{
    int sum = 0;
    int seq;

    for (int i = 1; i <= l; i++)
    {
        seq += printf ("%d^%d + ", i, i);

        sum = sum + pow (i,i);
    }
     printf ("\n");

     return sum;

}
