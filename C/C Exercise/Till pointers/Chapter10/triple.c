#include "functions.h"

void triple (int arr1[], int arr2[])
{
   for (int i = 1; i < 8; i++)
    {
        arr2[i] = arr1 [i - 1] * 3;
    }

}
