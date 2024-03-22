#include "functions1.h"

void testcaseUpdateValuInArray()
{
     int arr2[100] = {10, 20, 30, 40, 50};
    int *ptr2 = &arr2;

    printf ("Original value: \n");

    for (int i = 0; i < 5; i++)
    {
        printf ("%d ", *(ptr2 + i));
    }
    printf ("\n");

    changesec (ptr2);

    printf ("Updated value: \n");

    for (int i = 0; i < 5; i++)
    {
        printf ("%d ", *(ptr2 + i));
    }

}


void findMaxMinValueInArray()
{
        int size1;

    int arr1[100];
    int *ptr1 = &arr1;

    printf ("Enter the size of array: ");
    scanf ("%d", &size1);

    for (int i = 0; i < size1; i++)
    {
        printf ("Enter the value %d: ", i + 1);
        scanf ("%d", ptr1 + i);
    }

    for (int i = 0; i < size1; i++)
    {
        printf ("Element %d: %d\n", i + 1, *(arr1 + i));
    }

    int Diff1 = difference1(size1, ptr1);
    printf ("Difference is: %d\n", Diff1);

}

void testcaseCallbyRefrence()
{

    float x = 10.5;
    float *y = &x;

    printf ("Before changing: %.1f\n", x);

    change1 (y);

    printf ("After changing: %.1f\n", x);


}


int main()
{

testcaseCallbyRefrence();
findMaxMinValueInArray();
testcaseUpdateValuInArray();
    return 0;
}
