#include "functions.h"

int biggest (int x, int y, int w, int z)
{
    if (x > y && x > w && x > z)
    {
        return x;
    }

    else if (y > x && y > w && y > z)
    {
        return y;
    }

    else if (w > x && w > y && w > z)
    {
        return w;
    }

    else
    {
        return z;
    }
}
