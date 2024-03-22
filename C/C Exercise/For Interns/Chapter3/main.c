#include "functions.h"

void  display_biggest ()
{
    int x = 3, y = 2, w = 0, z = 9;

    int big = biggest (x, y, w, z);

    printf ("Biggest: %d", big);
}

void display_smallest ()
{
    int x = 1, y = 5, z = 6;

    int small = smallest (x, y, z);

    printf ("Smallest: %d", small);
}

int main(int argc, char *argv[])
{
    if (argc != 3)
    {
        printf("Please provide exactly two command line arguments (x and y).\n");

        return 1;
    }

    int x = atoi(argv[1]);
    int y = atoi(argv[2]);

    if (x == 0 || y == 0)
    {
        printf("One or both of the values are zero.\n");
    }
    else
    {
        int mul = x * y;
        int div = x / y;

        printf("Multiplication: %d\n", mul);
        printf("Division: %d\n", div);
    }

    return 0;
}
