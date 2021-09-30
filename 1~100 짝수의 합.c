#include "stdio.h"

int main()
{
	int a, b;
	for (a = 1, b = 0; a <=100; a++) {
		if (a % 2 == 0)
			b += a;
	}
	printf("%d", b);
}