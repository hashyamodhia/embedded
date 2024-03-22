#include "functions.h"

void read (FILE *fptr)
{
    fptr = fopen ("Table.txt", "r");

     if (fptr == NULL)
    {
        printf("The file is not opened. The program will exit now\n");
        exit(1);
    }

    char content[1024];

    while (fgets(content, sizeof(content), fptr) != NULL)
    {
        printf("%s", content);
    }

    fclose (fptr);

}
