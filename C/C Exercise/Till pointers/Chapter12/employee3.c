#include "functions1.h"

void display_employees3 (int num3, struct employee3 emp5[], struct employee4 emp6[])
{
    for (int i = 0; i < num3; i++)
    {
        memcpy(&emp6[i], &emp5[i], sizeof(struct employee3));

        printf ("Details of employee: %d\n", i + 1);

        printf ("Name: %s\n", emp6[i].name4);

        printf ("ID: %d\n", emp6[i].ID4);

        printf ("Total hours: %d\n", emp6[i].total_hrs4);

        printf ("Amount: %.2f\n", emp6[i].amount4);

        printf ("\n");
    }
}
