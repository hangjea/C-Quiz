#include "stdio.h"

int main()
{
	int a, b;
	for (a = 2; a <= 9; a++)
	{
		printf("%d´Ü: \n", a);
		for (b = 1; b <= 9; b++)
		{
			printf(" %d X %d = %2d\n", a, a, b, a * b);
		}
	}
}