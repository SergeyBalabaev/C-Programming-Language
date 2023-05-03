# Лабораторная работа 3
 
1. Самостоятельно изучить главу 3.4 (Переключатель switch) книги «Язык программирования С», Б. Керниган, Д. Ритчи. Подумать, где в данном примере возможно использовать оператор switch. Исправить программу, используя его. 

```
#include <stdio.h>
int main()
{
	int x;
	scanf_s("%d", &x);
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
	if (x < 1)
		printf("<1\n");
	if (x > 7)
		printf(">7\n");
	return 0;
}
```

2. Написать программу, вычисляющую функцию:  
y = $\sqrt{\frac{x+5}{x+1}}$

3. Написать программу, вычисляющую функцию:  
    &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;| $5x^{2}; x<0$  
y = | $0; x=0$  
    &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;| $\frac{x^{3}+1}{x^{2}+1}; x>0$
