#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[5];
    int size = 20;

    *a = (int *)malloc(size * sizeof(int));

    if (a == NULL)
    {
        printf("Memory allocation failed\n");
        return 1;
    }

    for (int i = 0; i < 5; i++)
    {
        a[i] = i * 10;
    }

    printf("\n");

    for (int i = 0; i < 5; i++)
    {
        printf("a[%d]: %d, Address: %d\n", i, a[i], &a[i]);
    }

    free(a);

    return 0;
}