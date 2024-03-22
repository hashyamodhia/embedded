#include <stdio.h>
#include <stdlib.h>

struct S
{
    char a;
    char b;
    char c;
    char d;
};

struct S s;

int main()
{
    s.a = 'a';
    s.b = 'b';
    s.c = 'c';
    s.d = 'd';

    short *shortPtr = (short*) &s;
       char *charPtr = (char*) &s;

    printf("Using short: \n");
    printf("Short 0: %x\nShort 1: %x\n", shortPtr[0], shortPtr[1]);

    printf("\nUsing char: \n");
    printf("Char 0: %c\nChar 1: %c\nChar 2: %c\nChar 3: %c\n", charPtr[0], charPtr[1], charPtr[2], charPtr[3]);

    return 0;
}
