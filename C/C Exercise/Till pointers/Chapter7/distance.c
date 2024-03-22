#include "functions.h"
#include <math.h>

float dis (int x1, int x2, int y1, int y2)
{
    float distance = ((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1));
    float result = sqrt (distance);

    return result;

}
