#include "functions.h"

void operations (int a , int b)
{
    int and = a & b;
    int or = a | b;
    int not = a != b;
    int xor = a ^ b;

    printf ("AND: %d\n", and);
    printf ("OR: %d\n", or);
    printf ("NOT: %d\n", not);
    printf ("XOR: %d\n", xor);
}
