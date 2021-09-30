#include "stdio.h"

int main()
{
	int a=2, b=1;
	while (a<=9)
	{
		while (b <= 9)
		{
			printf("%d x %d = %2d \n", a, b, a * b);
			b++;
		}
		b = 1;
		a++;
	}
	
}