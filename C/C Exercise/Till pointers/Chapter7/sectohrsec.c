#include "functions.h"

void sectohrsec(int sec)
{
    int hr = 0, sec1 = 0;

    hr = sec / 3600;
    sec1 = sec % 3600;

    printf("Hour: %d\nSec: %d\n", hr, sec1);
}
