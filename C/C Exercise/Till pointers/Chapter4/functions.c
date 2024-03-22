#include "functions.h"
#define PI 3.14

int area_rect (int l, int b)

{
    int area;

    area = l * b;

    return area;
}

int perimeter_circle (int r)

{
    int perimeter;

    perimeter = 2*PI*r;

    return perimeter;
}
