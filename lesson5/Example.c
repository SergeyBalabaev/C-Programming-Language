#include <stdio.h>
#include <stdlib.h>
#include <time.h>
const int N = 5;

void input_array(double x[])
{
	for (int i = 0; i < N; i++)
		x[i] = rand() % 100;
}


double summ(double x, double y)
{
	return x + y;
}

void print_on_screen(double *x, int flag)
{
	if(flag)
		printf("X = %lf\n", *x);
	else
	{
	for (int i = 0; i < 5; i++)
		printf("%lf ", x[i]);
	printf("\n");
	}
}


int main()
{
	double arr[10];
	double a = 10;
	srand(time(NULL));
	input_array(arr);
	double x = summ(10.1, 20.1);
	print_on_screen(&x, 1);
	return 0;
}
