#include "functions.h"

int main()
{
    int *ptr;
    int s = 16;

    ptr = (int *)malloc (s * sizeof(int));

    if (ptr == NULL)
    {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf ("Before changing\n");

    for (int i = 0; i < s; i++)
    {
        ptr[i] = i;
    }

    memallocation1 (s, ptr);

    printf ("\n");

    printf ("After changing\n");

    for (int i = 0; i < s; i++)
    {
        ptr[i] = ptr[i] * 2;
    }
    memallocation1 (s, ptr);

    free (ptr);

    return 0;
}
