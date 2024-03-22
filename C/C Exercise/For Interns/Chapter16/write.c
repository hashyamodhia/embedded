#include "functions.h"

void write ()
{
    FILE *fptr;

    fptr = fopen ("Table.txt", "w");
    fprintf (fptr, "10 table\n");


    for (int i = 1; i <= 10; i++)
    {
        fprintf (fptr, "10 x %d = %d\n", i, i * 10);

    }
    fprintf (fptr, "\n");

    if (fptr == NULL)
    {
        printf("The file is not opened. The program will exit now\n");
        exit(0);
    }

    fclose(fptr);

}
