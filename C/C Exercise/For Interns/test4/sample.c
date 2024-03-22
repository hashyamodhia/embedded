#include "functions.h"

struct details functions (struct details *dt, int value)
{
    dt = (int *) malloc (value * sizeof(int));

    if (dt == NULL)
    {
        printf ("Memory allocation failed\n");
        return 1;
    }




    return *dt;

};
