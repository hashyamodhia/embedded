#include "functions.h"

void pass()

{
    int pass;
    LABEL:
        {
            printf ("Enter password: ");
            scanf ("%d", &pass);
        }
        if (pass == 3355)
            printf ("Password is correct\n\n");

        else
            {
                printf ("Incorrect Password\n\n");
                goto LABEL;
            }
}
