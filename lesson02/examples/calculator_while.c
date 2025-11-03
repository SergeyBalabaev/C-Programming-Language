#include <stdio.h>
#include <math.h>
#include <cstdlib>

int main()
{
    std::system("chcp 1251");
    printf("Введите x\n");

    int x, y;
    double result;
    char op, cont;
    do
    {
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
        printf("%d %c %d = %lf\n", x, op, y, result);
        printf("Продолжить вычисления? (Y/N)\n");
        scanf_s(" %c", &cont);
    } while (cont == 'Y');
    return 0;
}
