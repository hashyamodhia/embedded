#include "functions.h"

void sequence ()
{
    double s = 0.0;

    for (int i = 1; i < 50; i++)
    {

        s = s + (1.0 / i);
    }
    printf ("S: %lf\n", s);
}
