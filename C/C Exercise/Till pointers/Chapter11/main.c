#include "functions.h"

int main()
{
//    float km;
//    int inches;
//
//    printf ("Enter km: \n");
//    scanf ("%f", &km);
//
//    inches = convert(km);
//    printf ("%.2f in inches is %d", km, inches);

//    int x;
//    char c;
//
//    printf("Enter x: \n");
//    scanf("%d", &x);
//
//    c = convert2(x);
//    printf("%d in char is: %c", x, c);

    float x = 5.5;
    int d;

//    printf ("Enter x: \n");
//    scanf ("%f", &x);

//    d = (int) (x);

    d = convert3 (x);
    printf ("%.2f in integer is: %d", x, d);

    return 0;
}
