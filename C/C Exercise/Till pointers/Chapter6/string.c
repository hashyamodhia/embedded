#include "functions.h"


void reverse1()
{
//   str[100];

    i, j;

   int length = strlen(str);

    i = 0;
    j = 0;

  for (int start = 0, end = length - 1; start < end; start++, end--)
    {
     char temp = str[i];
     str[i] = str[j];
     str[j] = temp;
    }

 printf ("Reversed string: %s", str);
;
}
