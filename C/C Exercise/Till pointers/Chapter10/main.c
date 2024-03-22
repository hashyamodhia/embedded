#include "functions.h"

int main()
{
//    int numstu;
//
//    printf ("Enter number of students: \n");
//    scanf ("%d", &numstu);
//
//    int maths [numstu];
//    float result;
//
//    printf ("Enter marks of the students: \n");
//
//    for (int i  = 0; i < numstu; i++)
//    {
//        scanf ("%d", &maths[i]);
//    }
//
//    avg (numstu, maths, &result);
//    printf ("Avg: %.2f", result);

//    printf ("%s\n", str());


//	twoD(5);

//	char name[20];
//
//    printf("Enter your name: \n");
//    gets(name);
//
//    int count = cnt(name);
//    printf("The number of letters in your name is: %d\n", count);

//    printf ("Enter the elements to the array:\n");
//    int arr1[7], arr2[8] = {0};
//    for (int i = 0; i < 7; i++)
//    {
//          scanf ("%d", &arr1[i]);
//    }
//    arr2[0] = arr1[0];
//    triple(arr1, arr2);
//
//    printf("Array with triples of previous elements:\n");
//    for (int i = 0; i < 8; i++)
//    {
//        printf("%d\n", arr2[i]);
//    }

    printf ("Enter the elements to the array: \n");
    int arr3[6], arr4[6];

    for (int i = 0; i < 6; i++)
    {
        scanf ("%d", &arr3[i]);
    }

    change (arr3, arr4);
    arr3[0] = arr4[5];

     printf("Array after changing:\n");
    for (int i = 0; i < 6; i++)
    {
        printf("%d\n", arr3[i]);
    }

    return 0;
}
