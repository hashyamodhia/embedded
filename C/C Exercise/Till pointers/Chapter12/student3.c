#include "functions2.h"

void display_student3 (int num6, struct student3 stu5[], struct student4 stu6[])
{
    for (int i = 0; i < num6; i++)
    {
        memcpy(&stu6[i], &stu5[i], sizeof(struct student3));

        printf ("Details of student: %d\n", i + 1);

        printf ("Name: %s\n", stu6[i].name4);

        printf ("ID: %d\n", stu6[i].roll_no4);

        for (int j = 0; j < 4; j++)
        {
            printf ("Marks for subject: %d\n", stu6[i].marks4[j]);
        }

        printf ("Percentage: %.2f\n", stu6[i].percentage4);

        printf ("\n");
    }
}
