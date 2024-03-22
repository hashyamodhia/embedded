#include "functions.h"

int main(int argc, char *argv[])
{
    if (argc == 3)
    {
        printf ("%s\n", argv[1]);
        printf ("%s\n", argv[2]);
    }

    else
    {
        printf ("Insufficient arguments please set 2 arguments");
    }
        //    int n;
//    printf ("Enter a number:\n\n");
//    scanf ("%d", &n);
//
//    int number1 = shift_left (n);
//    int number2 = shift_right (n);
//
//    printf ("Left shift of %d is: %d\n", n, number1);
//    printf ("Right shift of %d is: %d\n",n, number2);

//    char s[100];
//    printf ("String progaram");
//
//    printf ("Enter a string:\n\n");
//    scanf ("%s", s);
//
//    char *str1 = reverse1 (s);
//
//    printf ("Reversed string: %s", str1);

//    printf ("String copy\n");
//
//    char str2[20];
//    char str3[20];
//
//    printf ("Enter value to string 2:\n");
//    scanf ("%s", str2);
//
//    printf ("Enter value to string 3: \n");
//    scanf ("%s", str3);
//
//    printf ("Str2: %s\n", str2);
//    printf ("Str3 before copy: %s\n", str3);
//
//    //strcpy (str3, str2);
//
//    printf ("Str3 after copy: %s\n\n", str3);
//
//    printf ("String comparison\n");
//
//    printf ("Return value of string comparison between %s and %s: %d\n\n", str2, str3, strcmp(str2, str3));
//
//    strcat (str2, str3);
//    printf ("Concate string: %s\n", str2);

//    char x, y;
//
//    printf ("Enter values: \n");
//    scanf ("%c %c", &x, &y);
//
//    printf ("Result: %d\n", compare(x, y));
    char alpha[4];

    printf ("Enter the sequence\n");

    for (int i = 0; i < 4; i++)
    {
        scanf (" %c", &alpha[i]);
    }

    sequence(alpha);

    return 0;
}
