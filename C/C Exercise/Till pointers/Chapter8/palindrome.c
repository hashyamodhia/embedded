#include "functions.h"

int palindrome (int n)
{
    int temp = n;
    int sum;
    while (n > 0)
    {
        int r = n % 10;
        sum = (sum * 10) + r;
        n = n / 10;
    }
    if (temp == sum)
        printf("palindrome number ");
    else
        printf("not palindrome");
    return 0;
}
