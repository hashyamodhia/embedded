#include "functions.h"

void memallocation1 (int s, int *ptr)
{
    for (int i = 0; i < s; i++)
    {
        printf ("%d ", ptr[i]);
    }
}
