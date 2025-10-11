#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

const int N = 10;

int main()
{
    srand(time(NULL));
    double *x = (double *)malloc(sizeof(double) * N);
    for (int i = 0; i < N; i++)
    {
        x[i] = rand() % 100;
    }
    double MAX = x[0], MIN = x[0];
    int MAX_i = 0, MIN_i = 0;
    for (int i = 1; i < N; i++)
    {
        if (x[i] < MIN)
        {
            MIN = x[i];
            MIN_i = i;
        }
        if (x[i] > MAX)
        {
            MAX = x[i];
            MAX_i = i;
        }
    }

    for (int i = 0; i < N; i++)
    {
        printf("%lf\n", x[i]);
    }

    x[MAX_i] = MIN;
    x[MIN_i] = MAX;
    printf("MIN = %lf\n", MIN);
    printf("MAX = %lf\n", MAX);

    for (int i = 0; i < N; i++)
    {
        printf("%lf\n", x[i]);
    }

    free(x);
    return 0;
}
