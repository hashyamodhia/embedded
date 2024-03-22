#include "functions.h"
#include <string.h>

char *reverse1(char str[])
{

    int i = 0;
    int j = 0;

    int length = strlen(str);


    for (int i = 0, j = length - 1; i < j; i++, j--)
    {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }

    return str;

}
