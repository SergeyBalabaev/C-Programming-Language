#include <stdio.h>
#include <stdlib.h>
#include <time.h>
const int N = 5;

void input_array(double x[][N])
{
	for (int i = 0; i < N; i++)
		for (int j = 0; j < N; j++)
		x[i][j] = rand() % 100;
}


double summ(double x, double y)
{
	return x + y;
}

void print_on_screen_var(double x)
{
		printf("%lf\n", x);
}

void print_on_screen_arr(double x[][N])
{
		for (int i = 0; i < N; i++)
		{
			for (int j = 0; j < N; j++)
				printf("%lf ", x[i][j]);
			printf("\n");
		}
}


int main()
{
	double arr[N][N];
	double a = 10;
	srand(time(NULL));
	input_array(arr);
	double x = summ(10.1, 20.1);
	print_on_screen_arr(arr);
	print_on_screen_var(a);
	return 0;
}
