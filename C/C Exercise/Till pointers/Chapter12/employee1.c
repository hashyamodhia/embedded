#include "functions1.h"

void display_employees1 (int num1, struct employee1 *emp2)
{
    for (int i = 0; i < num1; i++)
    {
        printf ("Name: %s\n", emp2[i].name1);

        printf ("ID: %d\n", emp2[i].ID1);

        printf ("Total hours: %d\n", emp2[i].total_hrs1);

        printf ("Amount: %.2f\n", emp2[i].amount1);

        printf ("\n");
    }
}
