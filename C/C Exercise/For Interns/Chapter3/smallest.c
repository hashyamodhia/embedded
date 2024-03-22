#include "functions.h"

int smallest (int x, int y, int z)
{
    if (x < y && y < z)
    {
        return x;
    }

    else if (y < x && y < z)
    {
        return y;
    }

    else if (z < x && z < y)
    {
        return z;
    }
}
