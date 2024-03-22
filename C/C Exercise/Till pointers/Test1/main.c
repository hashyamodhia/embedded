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

    char *charPointer = (char *)&s;
    printf("Memory of the struct using char*:\n");
    for (int i = 0; i < sizeof(struct S); i++)
    {
        printf("Address: %p, Value: %c\n", charPointer + i, *(charPointer + i));
    }

    short *shortPointer = (short *)&s;
    printf("\nMemory of the struct using short*:\n");
    for (int i = 0; i < sizeof(struct S) / sizeof(short); i++)
    {
        printf("Address: %p, Value: %04x\n", shortPointer + i, *(shortPointer + i));
    }

    return 0;
}
