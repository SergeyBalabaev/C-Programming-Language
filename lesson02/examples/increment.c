#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>       

int main()
{
	int i = 0;
	printf("i++: %d %d\n", i, i++);
	i = 0;
	printf("++i: %d %d\n", i, ++i);
	return 0;
}