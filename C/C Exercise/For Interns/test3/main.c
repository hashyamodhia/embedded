#include <stdio.h>
#include <stdlib.h>

int main()
{
    int b[5];

    for (int i = 0; i < 5; i++)
    {
        b[i] = i * 10;
    }

    for (int i = 0; i < 5; i++)
    {
        printf ("%d ", b[i]);
    }

    printf ("\nAddress: \n");

    for (int i = 0; i < 5; i++)
    {
        printf("&b[%d]: %p\n", i, (void *)&b[i]);
    }
    return 0;
}
