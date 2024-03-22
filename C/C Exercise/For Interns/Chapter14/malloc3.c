#include "functions.h"

void memallocation4(struct details2 *det2)
{
    printf("Enter the name: ");
    scanf("%s", det2->name2);

    printf("Enter the phonenumber: ");
    scanf("%lld", &det2->phonenumber2);
}
