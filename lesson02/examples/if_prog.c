#include <stdio.h>       

int main()                  
{         
	int num;
	printf("Enter number: ");
	scanf("%d",&num);
	if(num > 0)
		printf("+\n");
	else
		if(num < 0)
			printf("-\n");
		else
			printf("0\n");
	return 0;
} 