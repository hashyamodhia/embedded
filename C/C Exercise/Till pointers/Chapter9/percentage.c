#include "functions.h"

float per (int numstu, int numsub, int marks[numstu][numsub],float percentage[numstu])
{
    for (int i = 0; i < numstu; i++)
    {
        int total = 0;
        for (int j = 0; j < numsub; j++)
        {
            if (marks[i][j] < 50)
            {
                total += marks[i][j];
            }
            else
            {
                printf ("Enter marks less than 50\n");
            }
        }
        percentage[i] = ((float)total / (numsub * 50)) * 100;
    }

}
