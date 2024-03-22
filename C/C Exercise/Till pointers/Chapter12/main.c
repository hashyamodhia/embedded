#include "functions1.h"
#include "functions2.h"
#include "functions3.h"

int main()
{
//    int num1;
//
//    printf ("Enter number of employees: ");
//    scanf ("%d", &num1);
//
//    struct employee1 emp1[num1];
//    struct employee1 *emp2 = &emp1;
//
//    for (int i = 0; i < num1; i++)
//    {
//        printf ("Enter the details for employee : %d\n", i + 1);
//
//        printf ("Enter the name: ");
//        scanf ("%s", &emp1[i].name1);
//
//        printf ("Enter the ID: ");
//        scanf ("%d", &emp1[i].ID1);
//
//        printf ("Enter total hours: ");
//        scanf ("%d", &emp1[i].total_hrs1);
//
//        emp1[i].amount1 = emp1[i].total_hrs1 * 50;
//    }
//
//    display_employees1 (num1, emp1);
//
//    int num2;
//
//    printf ("Enter number of employees: ");
//    scanf ("%d", &num2);
//
//    struct employee2 emp3[num2];
//    struct employee2 *emp4 = &emp3;
//
//    for (int i = 0; i < num2; i++)
//    {
//        printf ("Enter the details for employee : %d\n", i + 1);
//
//        printf ("Enter the name: ");
//        scanf ("%s", &emp4->name2);
//
//        printf ("Enter the ID: ");
//        scanf ("%d", &emp4->ID2);
//
//        printf ("Enter total hours: ");
//        scanf ("%d", &emp4->total_hrs2);
//
//        emp4->amount2 = emp4->total_hrs2 * 50;
//
//        emp4++;
//    }
//
//    display_employees2 (num2, emp3);
//
//    int num3;
//
//    printf ("Enter number of employees: ");
//    scanf ("%d", &num3);
//
//    struct employee3 emp5[num3];
//    struct employee4 emp6[num3];
//
//    for (int i = 0; i < num3; i++)
//    {
//        printf ("Enter details of employee %d:\n", i + 1);
//
//        printf("Name: ");
//        scanf ("%s", &emp5[i].name3);
//
//        printf ("ID: ");
//        scanf ("%d", &emp5[i].ID3);
//
//        printf ("Total hours: ");
//        scanf ("%d", &emp5[i].total_hrs3);
//
//
//        emp5[i].amount3 = emp5[i].total_hrs3 * 50;
//    }
//
//    display_employees3 (num3, emp5, emp6);
//
//    int num4, total1 = 0;
//
//    printf("Enter number of students: ");
//    scanf("%d", &num4);
//
//    struct student1 stu1[num4];
//    struct student1 *stu2 = stu1;
//
//    for (int i = 0; i < num4; i++)
//    {
//        printf("Enter details of student %d\n", i + 1);
//
//        printf("Name: ");
//        scanf("%s", stu2[i].name1);
//
//        printf("Roll no: ");
//        scanf("%d", &stu2[i].roll_no1);
//
//        total1 = 0;
//
//        for (int j = 0; j < 4; j++)
//        {
//            printf("Enter marks for subject %d: ", j + 1);
//
//            scanf("%d", &stu2[i].marks1[j]);
//
//            total1 += stu2[i].marks1[j];
//        }
//
//        stu2[i].percentage1 = (float)total1 / 4;
//    }
//
//    display_student1(num4, stu1);
//
//    int num5, total2 = 0;
//
//    printf("Enter number of students: ");
//    scanf("%d", &num5);
//
//    struct student2 stu3[num5];
//    struct student2 *stu4 = stu3;
//
//    for (int i = 0; i < num5; i++)
//    {
//        printf("Enter details of student %d\n", i + 1);
//
//        printf("Name: ");
//        scanf("%s", &stu4 -> name2);
//
//        printf("Roll no: ");
//        scanf("%d", &stu4 -> roll_no2);
//
//        total2 = 0;
//
//        for (int j = 0; j < 4; j++)
//        {
//            printf("Enter marks for subject %d: ", j + 1);
//
//            scanf("%d", &stu4 -> marks2[j]);
//
//            total2 += stu4 -> marks2[j];
//        }
//
//        stu4 -> percentage2 = (float)total2 / 4;
//
//        stu4++;
//    }
//
//    display_student2(num5, stu3);
//
//    int num6, total3 = 0;
//
//    printf("Enter number of students: ");
//    scanf ("%d", &num6);
//
//    struct student3 stu5[num6];
//    struct student3 stu6[num6];
//
//    for (int i = 0; i < num6; i++ )
//    {
//        printf ("Enter details for student: %d\n", i + 1);
//
//        printf ("Name: ");
//        scanf ("%s", &stu5[i].name3);
//
//        printf ("Roll: ");
//        scanf ("%d", &stu5[i].roll_no3);
//
//        printf ("Enter marks: \n");
//
//        for (int j = 0; j < 4; j++)
//        {
//            printf("Enter marks for subject: %d\n", j + 1);
//
//            scanf ("%d", &stu5[i].marks3[j]);
//
//            total3 += stu5[i].marks3[j];
//        }
//
//        stu5[i].percentage3 = (float) total3 / 4;
//    }
//
//    display_student3 (num6, stu5, stu6);

    int num7;


    printf("Enter number of months: ");
    scanf("%d", &num7);

    struct SI1 simple1;
    struct SI1 *simple2 = &simple1;

    printf("Enter the amount for simple1: ");
    scanf("%d", &simple1.bamount1);

    printf("Enter the rate for simple1: ");
    scanf("%f", &simple1.rate1);

    display_amount1(num7, simple2);

//    int num8;
//
//
//    printf("Enter number of months: ");
//    scanf("%d", &num8);
//
//    struct SI2 simple3;
//    struct SI2 *simple4 = &simple3;


    return 0;
}
