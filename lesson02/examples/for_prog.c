#include <stdio.h>       

int main()                  
{         
	for(int i=0; i <10; i++)
	{
		printf("%d. Hello MIET!\n", i);
	}
 	printf("****\n");
	int i = 0;
	while(i < 10)
	{
		printf("%d. Hello MIET!\n", i);
  		i++;
	}
	printf("****\n");
	i = 0;
	do
	{
		printf("%d. Hello MIET!\n", i);
  		i++;
	}
	while(i < 10);

	printf("****\n");
	return 0;
} 