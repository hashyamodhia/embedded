#include "functions2.h"

void display_student2 (int num4, struct student2 *stu4)
{
    for (int i = 0; i < num4; i++)
    {
        printf("Details for student %d:\n", i + 1);

        printf("Name: %s\n", stu4 -> name2);

        printf("Roll no: %d\n", stu4 -> roll_no2);

        for (int j = 0; j < 4; j++)
        {
            printf("Marks for subject %d: %d\n", j + 1, stu4 -> marks2[j]);
        }

        printf("Percentage: %.2f\n", stu4 -> percentage2);

        stu4++;
    }
}
