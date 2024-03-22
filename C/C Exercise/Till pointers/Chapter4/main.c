#include "functions.h"

int main()
{
    int area, perimeter, maximum, s, days, d;

    printf ("Area of rectangle\n");
    area = area_rect(3,6);
    printf ("Area: %d\n\n", area);

    printf ("Perimeter of circle\n");
    perimeter = perimeter_circle (5);
    printf ("Perimeter: %d\n\n", perimeter);

    printf ("Days to years\n\n");
    printf ("Enter number of days:\n\n");

    scanf ("%d", &days);
    days_to_year(days);


    printf ("Maximum numbers\n\n");
    printf ("Enter the size:\n\n");
    scanf ("%d", &s);
    printf ("Enter %d numbers:\n\n", s);
    int n[s];

    for (int i = 0; i < s; i++)
        scanf ("%d", &n[i]);

    maximum = maxs (n, s);

    printf ("Maximum is: %d", maximum);

    return 0;
}
