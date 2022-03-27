#include <iostream>
const int N = 5;
//шаблоны С++. В данном случае, мы не указываем конкретный тип данных. Вместо него ставим тип "Type". Далее в зависимости от входных параметров будет производиться работа с тем или иным типом
template<class Type>
void input_array(Type x[][N])
{
	for (int i = 0; i < N; i++)
		for (int j = 0; j < N; j++)
		x[i][j] = rand() % 100;
}

template<class Type>
double summ(Type x, Type y)
{
	return x + y;
}

template<class Type>
void print_on_screen(Type x)
{
	std::cout << x << std::endl;
}

template<class Type>
void print_on_screen(Type x[][N])
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
	double arr_double[N][N];
	int arr_int[N][N];
	double a = 10.10;
	srand(time(NULL));
	input_array(arr_double);
	input_array(arr_int);
	double x = summ(10.1, 20.1);
	print_on_screen(arr_double); //массив double
	print_on_screen(arr_int); //массив int
	print_on_screen(x); //double
	print_on_screen("This is template!"); //Строка
	print_on_screen('!'); //char
	return 0;
}
