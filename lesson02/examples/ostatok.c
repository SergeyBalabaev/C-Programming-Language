#include <stdio.h>       
#include <locale.h>  

int main()
{
	int a = 19, b = 10;
	printf("%d / %d = %d\n", a, b, a / b);
	printf("%d %% %d = %d\n", a, b, a % b);
	printf("%d / %d = %lf\n", a, b, (double)a / b);
	return 0;
}