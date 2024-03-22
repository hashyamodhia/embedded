#include "functions.h"

int maxs (int n[], int s)

{
    int m = 0;

    for (int i = 0; i < s; i++)

        if (n[i] > m)
            m = n[i];

    return m;
}
