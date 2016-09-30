#include <stdio.h>
#include <conio.h>

int main(void)
{
	int a = 9, b = 6;
	a++;
	printf("a = %d  b=  %d \n", a, b);
	a = a + b--;
	printf("a = %d  b = %d \n", a, b);
	a = a + (--b);
	printf("a = %d  b = %d \n", a, b);




	
	_getch();
}
