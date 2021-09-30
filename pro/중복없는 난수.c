#include "stdio.h"
#include "stdlib.h"
#include "time.h"

int main()
{
	srand((unsigned int)(time(NULL)));
	int a[5];
	for  (int i = 0; i < 5; i++)
	{
		a[i] = rand() % 10;
		do
		{
			a[i] = rand() % 10;
		} while (i < 1 && a[i - 1] == a[i]);
	}
	for (int i = 0; i < 5; i++)
	{
		printf("%d ", a[i]);
	}
}