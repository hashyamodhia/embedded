#include "functions.h"
#define size 1000

void readb (FILE *fptr)
{
    fptr = fopen("Table.text", "rb");

    if (fptr == NULL)
    {
        printf ("Could not open the file\n");
        return 1;
    }
    char content[size];

    int i = 0;

    while (fgets(content, size, stdin) != NULL)
    {
        printf ("%s", content[i]);
        i++;
    }

}
