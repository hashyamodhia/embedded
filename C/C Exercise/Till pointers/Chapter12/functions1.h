#include <stdio.h>
#include <stdlib.h>

struct employee1
{
    char name1[20];
    int ID1;
    int total_hrs1;
    float amount1;
};

void display_employees1 (int num1, struct employee1 *emp2);

struct employee2
{
    char name2[20];
    int ID2;
    int total_hrs2;
    float amount2;
};

void display_employees2 (int num2, struct employee2 *emp4);

struct employee3
{
    char name3[20];
    int ID3;
    int total_hrs3;
    float amount3;
};

    struct employee4
{
    char name4[20];
    int ID4;
    int total_hrs4;
    float amount4;
};

void display_employees3 (int num3, struct employee3 emp5[], struct employee4 emp6[]);
