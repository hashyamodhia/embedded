#include "functions1.h"

void display_employees2(int num2, struct employee2 *emp4)
{
    for (int i = 0; i < num2; i++)
    {
        printf ("Details of employee: %d\n", i + 1);

        printf("Name: %s\n", emp4->name2);

        printf("ID: %d\n", emp4->ID2);

        printf("Total hours: %d\n", emp4->total_hrs2);

        printf("Amount: %.2f\n", emp4->amount2);

        printf("\n");

        emp4++;
    }
}
