#include "functions.h"

int high (int number[])
{
    int max = number[0];
    int index = 0;
    for (int i = 0; i < 5; i++)
    {
        if (max < number[i])
        {
            max = number[i];
            index = i;
        }
    }
    return index;
}

int ascending (int number[], int n)
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = i + 1; j < 5; j++)
        {
            if (number[i] > number[j])
            {
                int temp = number[i];
                number [i] = number [j];
                number [j] = temp;
            }
        }
    }
}
