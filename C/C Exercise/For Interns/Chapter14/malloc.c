#include "functions.h"

void memallocation1 ()
{
    int *array;
    int size = 16;

    array = (int *)malloc(size * sizeof(int));

    if (array == NULL)
    {
        printf("Memory allocation failed.\n");
        return 1;
    }

    for (int i = 0; i < size; i++)
    {
        array[i] = i * 2;
    }

    printf("Array elements:\n");

    for (int i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }

    printf("\n");

    free(array);

}
