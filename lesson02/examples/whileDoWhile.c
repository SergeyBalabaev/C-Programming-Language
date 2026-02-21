#include <stdio.h>

const int param = 0;
int main()
{
	int i = param;
	while (i < 5) 
	{
		printf("WHILE: Hello, MIET\n");
		i++;
	}
	i = param;
	do
	{
		printf("DO WHILE: Hello, MIET\n");
		i++;
	} while (i < 5);
	return 0;
}
