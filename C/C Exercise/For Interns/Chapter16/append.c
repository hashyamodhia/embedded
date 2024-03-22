#include "functions.h"

void append()
{
    FILE *fptr;
    fptr = fopen("Table.txt", "w");
    fprintf (fptr, "11 table\n");

    if (fptr == NULL)
    {
        printf("The file is not opened. The program will exit now\n");
        exit(1);
    }

    fprintf(fptr, "\n");

    for (int i = 1; i <= 10; i++)
    {
        fprintf(fptr, "11 x %d = %d\n", i, i * 11);
    }

    fclose(fptr);
}
