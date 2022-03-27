#include <stdio.h>
#include <math.h>

int main()
{
    // рабочие переменные
    int x[5];
    for (size_t i = 0; i < 5; i++)
    {
        scanf_s("%d", &x[i]);
    }
    double aver = 0, var = 0;
    for (size_t i = 0; i < 5; i++)
    {
        aver = aver + x[i];
    }
    aver = aver / 5;
    for (size_t i = 0; i < 5; i++)
    {
        var = var + pow(x[i] - aver, 2);
    }
    var = var / 4;
    printf("Aver=%lf\n", aver);
    printf("Var=%lf\n", var);
    return 0;
}
