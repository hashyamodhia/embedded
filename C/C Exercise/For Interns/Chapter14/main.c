#include "functions.h"

int main()
{

//    memallocation1 ();
//    memallocation2 ();

//    struct details *det1;
//
//    int value = 1;
//
//    det1 = (struct details *)calloc(value, sizeof(struct details));
//
//    if (det1 == NULL)
//    {
//        printf("Memory allocation failed.\n");
//        return 1;
//    }
//    for (int i = 0; i < value; i++)
//    {
//        printf ("Enter name: ");
//        scanf ("%19s", det1[i].name);
//
//        printf ("Enter phone number: ");
//        scanf ("%lld", &det1[i].phonenumber);
//    }
//
//    memallocation3 (det1, value);
//
//    free(det1);

//    struct details *det2;
//
//    int value = 1;
//
//    det2 = (struct details *)malloc(value * sizeof(struct details));
//
//    if (det2 == NULL)
//    {
//        printf("Memory allocation failed.\n");
//        return 1;
//    }
//    for (int i = 0; i < value; i++)
//    {
//        printf ("Enter name: ");
//        scanf ("%19s", det2[i].name);
//
//        printf ("Enter phone number: ");
//        scanf ("%lld", &det2[i].phonenumber);
//    }
//
//    memallocation3 (det2, value);

//    int value = 1;
//    struct details *det3;
//
//    det3 = (struct details *)malloc(value * sizeof(struct details));
//
//    if (det3 == NULL)
//    {
//        printf("Memory allocation failed.\n");
//        return 1;
//    }
//
//    for (int i = 0; i < value; i++)
//    {
//        det3[i].name = (char *)malloc(value * sizeof(char));
//        if (det3[i].name == NULL)
//        {
//            printf("Memory allocation failed for name.\n");
//            return 1;
//        }
//
//        printf("Enter name: ");
//        scanf("%19s", det3[i].name);
//
//
//        det3[i].phonenumber = (long long int *)malloc(value * sizeof(long long int));
//        if (det3[i].phonenumber == NULL)
//        {
//            printf("Memory allocation failed for phone number.\n");
//            return 1;
//        }
//
//        printf("Enter phone number: ");
//        scanf("%lld", &det3[i].phonenumber);
//    }
//
//
//    memallocation3(det3, value);
//
//    for (int i = 0; i < value; i++)
//    {
//        free(det3[i].name);
//        free(det3[i].phonenumber);
//    }
//    free(det3);

//
    struct details2 *det2 = (struct details2 *)malloc(sizeof(struct details2));

    if (det2 == NULL)
    {
        printf("Memory allocation failed\n");
        return 1;
    }

    memallocation4(det2);

    printf("Name: %s\n", det2->name2);
    printf("Phonenumber: %lld\n", det2->phonenumber2);

    free(det2);

    return 0;
}

