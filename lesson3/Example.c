#include <stdio.h> 

void checkodd()
{
	int number;
	printf("Enter number\n"); scanf_s("%d", &number);
	if (number % 2 == 0)
		printf("Odd\n");
	else
		printf("No odd\n");
}

int main()
{
	int checkvar;
	do
	{
		printf("What we want to do?\n 1-enter number; \n 2-exit\n");
		scanf_s("%d", &checkvar);
		if (checkvar == 1)
		{
			checkodd();
		}
		else
		{
			if (checkvar != 2)
				printf("Wrong nuber\n");
		}
	} while (checkvar != 2);
	return 0;
}
