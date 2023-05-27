#include <stdio.h>
#include <math.h>

const int interval_a = 10;

int main()
{
    double x, y;
    printf("Enter X\n");
    scanf_s("%lf", &x);
    if (x < 10)
        y = x + 5;
    if (x > 20)
        y = pow(x, 2);
    if (x >= 10 && x <= 20)
        y = sin(x);

    printf("Y = %lf\n", y);
    return 0;
}
