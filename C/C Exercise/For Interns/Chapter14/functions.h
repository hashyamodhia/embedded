#include <stdio.h>
#include <stdlib.h>

void memallocation1 ();
void memallocation2 ();


struct details
{
    char *name;
    long long int phonenumber;
};

void memallocation3 (struct details *det, int value);

struct details2
{
    char name2[100];
    long long int phonenumber2;
};

void memallocation4(struct details2 *det2);

