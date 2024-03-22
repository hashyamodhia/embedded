#include "functions.h"

int convert (float km)
{
    int inches = (int)(39370.07874 * km);

    return inches;
}
