#include <stdio.h>
#include <math.h>
#include <cstdlib>

int main()
{
    std::system("chcp 1251");
    int x, y;
    double result;
    char op;
    printf("Введите x\n");
    scanf_s("%d", &x);
    printf("Введите y\n");
    scanf_s("%d", &y);
    printf("Введите op\n");
    scanf_s(" %c", &op);

    if (op == '+')
        result = x + y;
    if (op == '-')
        result = x - y;
    if (op == '*')
        result = x * y;
    if (op == '/')
        result = (double)x / y;
    if (op == '^')
        result = pow(x, y);
    printf("%d %c %d = %lf", x, op, y, result);
    return 0;
}
