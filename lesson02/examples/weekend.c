#include <stdio.h>

int main()
{
	int x;
	scanf("%d", &x);
	if (x == 1)
		printf("Monday\n");
	if (x == 2)
		printf("Tuesday\n");
	if (x == 3)
		printf("Wednesday\n");
	if (x == 4)
		printf("Thursday\n");
	if (x == 5)
		printf("Friday\n");
	if (x == 6)
		printf("Saturday\n");
	if (x == 7)
		printf("Sunday\n");
	if (x < 1 || x > 7)
		printf("Error\n");
	return 0;
}

