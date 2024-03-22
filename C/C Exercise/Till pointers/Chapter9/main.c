#include "functions.h"

int main()
{
//    int monthnumber;
//
//    printf ("Enter a number: \n");
//    scanf ("%d", &monthnumber);
//
//    if (monthnumber >= 1 && monthnumber <= 12)
//    {
//        char *monthName = mon(monthnumber);
//        printf("Month %d is : %s\n", monthnumber, monthName);
//    }
//    else
//    {
//        printf("Invalid input! Please enter an integer between 1 and 12.\n");
//    }

//   int numstu, numsub;
//
//    printf("Enter number of students: ");
//    scanf("%d", &numstu);
//
//    printf("Enter number of subjects: ");
//    scanf("%d", &numsub);
//
//    int marks[numstu][numsub];
//
//    for (int i = 0; i < numstu; i++)
//    {
//        printf("\nEnter marks for student %d\n", i + 1);
//
//        for (int j = 0; j < numsub; j++)
//        {
//            printf ("Enter marks for subject %d: ", j + 1);
//            scanf("%d", &marks[i][j]);
//        }
//    }
//
//    float percentage[numstu];
//    per(numstu, numsub, marks, percentage);
//
//    for (int i = 0; i < numstu; i++)
//    {
//        printf("Percentage of student %d is %.2f\n", i + 1, percentage[i]);
//    }

    int number[7];
//    int highest = 0;
//
    printf("Enter numbers: \n");

    for (int i = 0; i < 7; i++)
    {
        scanf("%d", &number[i]);
    }
//
//    highest = high(number);
//    printf("Position of highest is: %d\n", highest + 1);

//    ascending (number, 5);
//
//    printf("Ascending array: \n");
//
//    for (int i = 0; i < 5; i++)
//    {
//        printf("%d\n", number[i]);
//    }
    printf ("After replacing the array:\n");

    replaces (number, 7);

    for (int i = 0; i < 7; i++)
    {
        printf ("%d\n", number[i]);
    }

    return 0;
}
