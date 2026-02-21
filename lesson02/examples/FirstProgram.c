#include <stdio.h>       

int main()                  
{         
	int checkvar;
	do
	{
		printf("What we want to do?\n 1-enter number; \n 2-exit\n");
		scanf("%d",&checkvar);
		if(checkvar==1)
		{
			int number;
			printf("Enter number\n");
			scanf("%d",&number);
			if(number%2==0)
				printf("Odd\n");
			else
				printf("No odd\n");
		}
		else
		{
			if(checkvar!=2)
				printf("Wrong nuber\n");
		}
	}
	while(checkvar!=2);
	return 0;
} 