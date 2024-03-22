#include "functions.h"

int maxi (int a[], int n)

{
    int maximum = a[0];
    for (int i = 0; i < n; i++)
    {
        if (maximum < a[i])
        {
            maximum = a[i];
        }
    }

    return maximum;
}

int mini (int a[], int n)
{
    int minimum = a[0];
    for (int i = 0; i < n; i++)
    {
        if (minimum > a[i])
        {
            minimum = a[i];
        }
    }

    return minimum;
}
