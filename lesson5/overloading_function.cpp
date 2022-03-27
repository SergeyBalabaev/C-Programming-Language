#include <iostream>
//Перегрузка функций
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

void print_on_screen(double x)
{
	std::cout << x;
}

void print_on_screen(double x[][N])
{
		for (int i = 0; i < N; i++)
		{
			for (int j = 0; j < N; j++)
				std::cout << x[i][j] << " ";
			std::cout << std::endl;
		}
}


int main()
{
	double arr[N][N];
	double a = 10.10;
	srand(time(NULL));
	input_array(arr);
	double x = summ(10.1, 20.1);
	print_on_screen(arr);
	print_on_screen(a);
	return 0;
}
