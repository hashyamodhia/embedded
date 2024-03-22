#include "functions3.h"

void display_amount1(int num7, struct SI1 *simple2)
{
    simple2->total1 = simple2->bamount1;

    for (int i = 0; i < num7; i++)
    {
        printf("Month: %d\n", i + 1);

        simple2->interest1 = (simple2->bamount1 * simple2->rate1 * (i + 1) / 12) / 100;

        printf("Interest is: %.2f\n", simple2->interest1);

        simple2->total1 += simple2->interest1;

    }

    printf("Total after 12 months: %.2f\n", simple2->total1);
}
