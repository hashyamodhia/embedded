#include "functions.h"

int cnt (char name [])
{
    int letterCount = 0;

    for (int i = 0; i < strlen(name); i++)
    {
        if (isalpha(name[i]))
        {
            letterCount++;
        }
    }

    return letterCount;
}
