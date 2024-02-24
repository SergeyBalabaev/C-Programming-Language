#include <stdio.h>       

int main()
{                               
	printf("Sizeof int = %d bytes\n", sizeof(int));
	printf("Sizeof char = %d bytes\n", sizeof(char));  
	printf("Sizeof float = %d bytes\n", sizeof(float)); 
	printf("Sizeof double = %d bytes\n", sizeof(double));
	printf("\n\tWith modifers\n\n");

	printf("Sizeof short int = %d bytes\n", sizeof(short int));
	printf("Sizeof long int = %d bytes\n", sizeof(long int)); 
	printf("Sizeof long long int = %d bytes\n", sizeof(long long int));	
	return 0;                   
} 