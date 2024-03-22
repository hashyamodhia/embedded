#include "functions.h"

int cal(int a, int b)
{
    int choice;
    int A, S, M;
    float D;
    int not_flag;

    char arith[] = "+-*/";
    printf("1) OR\n");
    printf("2) AND\n");
    printf("3) NOT\n");
    scanf("%d", &choice);

    switch (choice)
    {
        case 1:
            if (arith[0] == '+' || arith[1] == '-' || arith[2] == '*' || arith[3] == '/')
                {
                    A = Addition(a, b);
                    S = Subtraction(a, b);
                    M = Multiple(a, b);
                    D = Division(a, b);
                    printf("Addition: %d\n", A);
                    printf("Subtraction: %d\n", S);
                    printf("Multiplication: %d\n", M);
                    printf("Division: %.2f\n", D);
                }

            break;

        case 2:
            if (arith[0] == '+' && arith[1] == '-' && arith[2] == '*' && arith[3] == '/')
                {
                    A = Addition(a, b);
                    S = Subtraction(a, b);
                    M = Multiple(a, b);
                    D = Division(a, b);
                    printf("Addition: %d\n", A);
                    printf("Subtraction: %d\n", S);
                    printf("Multiplication: %d\n", M);
                    printf("Division: %.2f\n", D);
                }

            break;

        case 3:
            not_flag = !(arith[0] == '+' && arith[1] == '-');
            printf("Not: %d\n", not_flag);
            break;

        default:
            printf("Invalid input\n");
            return 0;
    }
    return 0;
}

int Addition(int a, int b)
{
    int result = a + b;
    return result;
}

int Subtraction(int a, int b)
{
    int result = a - b;
    return result;
}

int Multiple(int a, int b)
{
    int result = a * b;
    return result;
}

float Division(int a, int b)
{
    if (b != 0)
    {
        float result = (float)a / b;
        return result;
    }
    else
    {
        printf("Error: Division by zero\n");
        return 0.0;
    }

}
