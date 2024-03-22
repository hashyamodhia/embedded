#include "functions.h"

void avg (int numstu, int maths[numstu], float *average)
{
    int sum = 0;

    for (int i = 0; i < numstu; i++)
    {
        sum += maths[i];
    }

    *average = (float) sum / numstu;
}
