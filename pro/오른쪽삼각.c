#include "stdio.h"

int main()
{
	int a, b, c;
	for (a = 1, b = 1, c = 10; b <= c; b++) {
		for (a = c; a > b; a--)
		{
			printf(" ");
		}


		for (a = 0; a < b; a++)
		{
			printf("*");
		}
		printf("\n");
	}
}