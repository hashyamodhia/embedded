#include "functions.h"

int odd (int a[])
{
    int sum = 0;
    for (int i = 0; i < 10; i++)

    {
        if (a[i] % 2)
        {
            sum = sum + a[i];
        }
    }

    return sum;
}

int even (int a[])
{
    int sum = 0;
    for (int i = 0; i < 10; i++)

    {
        if (a[i] % 2 == 0)
        {
            sum += a[i];
        }
    }

    return sum;
}
