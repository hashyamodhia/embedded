#include <stdio.h>
#include <stdlib.h>

struct student1
{
    char name1[20];
    int roll_no1;
    int marks1[4];
    float percentage1;
};

void display_student1 (int num4, struct student1 *stu2);

struct student2
{
    char name2[20];
    int roll_no2;
    int marks2[4];
    float percentage2;
};

void display_student2 (int num4, struct student2 *stu4);

struct student3
{
    char name3[20];
    int roll_no3;
    int marks3[4];
    float percentage3;
};

    struct student4
{
    char name4[20];
    int roll_no4;
    int marks4[4];
    float percentage4;
};

void display_student3 (int num6, struct student3 stu5[], struct student4 stu6[]);
