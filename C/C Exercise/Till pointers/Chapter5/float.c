#include "functions.h"

float max_min (float n[], int s)

{
    float max = n[0], min = n[0];

    for (int i = 0; i < s; i++)
    {
        if (n [i] > max)
            max = n[i];

        if (n [i] < min)
            min = n[i];
    }

    printf ("Maximum is: %.2f\n", max);
    printf ("Minimum is: %.2f\n", min);
}
