#include <stdio.h>       

int main()                  
{         
	int num_of_students;
        char comma;
	char line[8];                
	scanf("%s",line);
	scanf(" %c",&comma);
	scanf("%d",&num_of_students);                      
	printf("Good %s%c my dear %d students\n",line,comma,num_of_students); 
	return 0;
} 