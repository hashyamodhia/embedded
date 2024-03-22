#include "functions.h"

void sectohrminsec (int sec)
{
    int hr = 0, min = 0;

    hr = (sec/3600);

	min = (sec -(3600*hr))/60;

	sec = (sec -(3600*hr)-(min*60));

	printf ("Hour: %d \n Min: %d \n Sec: %d\n", hr, min, sec);
}
