#include "functions.h"

void days_to_year(int d)
{
    int days, years, weeks;

    years = d/365;
    weeks = (d % 365)/7;
    days = d- ((years*365) + (weeks*7));
    days = days + (weeks*7);

    printf("Years: %d\n", years);
    printf("Days: %d \n", days);
}
