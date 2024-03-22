#include "functions.h"

void memallocation3 (struct details *det, int value)
{
    for (int i = 0; i < value; i++)
    {
        printf ("Name: %s\n", det[i].name);

        printf ("Phone Number: %lld\n", det[i].phonenumber);
    }

}
