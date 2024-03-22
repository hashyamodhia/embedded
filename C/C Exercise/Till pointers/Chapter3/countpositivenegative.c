#include "functions.h"

void positive_negative()
{
    int n[10];
    int countpositive = 0, countnegative = 0;

    printf ("Enter 10 numbers\n\n");
    for (int i = 0; i < 10; i++)
    {
        scanf ("%d", &n[i]);
        if (n[i] > 0)
            countpositive++;
        else
            countnegative++;
    }

   printf ("Total positive numbers: %d\n", countpositive);
   printf ("Total negative numbers: %d\n", countnegative);
}
