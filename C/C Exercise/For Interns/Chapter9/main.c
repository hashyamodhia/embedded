#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    if (argc < 2)
    {
        printf("Usage: %s <size> <element1> <element2> ... <elementN>\n", argv[0]);
        return 1;
    }

    int size = atoi(argv[1]);

    if (argc != size + 2)
    {
        printf("Please provide the correct number of elements.\n");
        return 1;
    }

    int array[size];

    for (int i = 0; i < size; i++)
    {
        array[i] = atoi(argv[i + 2]);
    }

    printf("Entered array: ");

    for (int i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}
