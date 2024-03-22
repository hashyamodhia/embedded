#include "functions.h"

void memallocation2()
{
    char *array;
    int size = 26;

    array = (char *)malloc(size * sizeof(char));


    if (array == NULL)
    {
        printf("Memory allocation failed.\n");
        return 1;
    }

    for (int i = 0; i < size; i++)
    {
        array[i] = 'A' + i;
    }

    printf("Array elements:\n");

    for (int i = 0; i < size; i++)
    {
        printf("%c ", array[i]);
    }

    printf("\n");

    free(array);
}
