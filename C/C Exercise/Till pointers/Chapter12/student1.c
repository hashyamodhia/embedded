#include "functions2.h"

void display_student1 (int num4, struct student1 *stu2)
{
    for (int i = 0; i < num4; i++)
    {
        printf("Details for student %d:\n", i + 1);

        printf("Name: %s\n", stu2[i].name1);

        printf("Roll no: %d\n", stu2[i].roll_no1);

        for (int j = 0; j < 4; j++)
        {
            printf("Marks for subject %d: %d\n", j + 1, stu2[i].marks1[j]);
        }

        printf("Percentage: %.2f\n", stu2[i].percentage1);
    }
}
