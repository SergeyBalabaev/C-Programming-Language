#include <stdio.h>
#include <math.h>

int main()
{
	int a1,a2,a3,a4,a5,a6,a100;
	scanf_s("%d", &a1);
	scanf_s("%d", &a2);
	scanf_s("%d", &a3);
	scanf_s("%d", &a4);
	scanf_s("%d", &a5);
	double aver = (double)(a1 + a2 + a3 + a4 + a5) / 5;
	double var = (pow(a1 - aver, 2) + pow(a2 - aver, 2) + pow(a3 - aver, 2) + pow(a4 - aver, 2) + pow(a5 - aver, 2)) / 4;
	printf("Aver=%lf\n", aver);
	printf("Var=%lf\n", var);
	return 0;
}
