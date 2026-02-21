#include <stdio.h>
int main() {
	int num;
	scanf("%d", &num);
	printf("Вы ввели число %d\n", num);
	if (num == 0)
		printf("Это ноль\n");
	else
		printf("Это не ноль\n");
	return 0;
}
