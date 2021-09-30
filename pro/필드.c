#include "stdio.h"
#include "stdlib.h"
#include "time.h"
#define x 100
#define y 100

int main()
{
	srand((unsigned int)time(NULL));
	char field[x][y];
	int a, b;
	for (int i = 0; i < 100; i++)
	{
		for (int j = 0; j < 100; j++)
		{
			field[i][j] = (rand() % 100) + 1;
		}5
	}
	for (int i = 0; i < 100; i++)
	{
		for (int j = 0; j < 100; j++)
		{
			if (field[i][j] <= 80)
				field[i][j] = '_';
			else if (field[i][j] <= 95)
				field[i][j] = 'T';
			else if (field[i][j] <= 97)
				field[i][j] = '+';
			else if (field[i][j] == 98)
				field[i][j] = '*';
			else if (field[i][j] == 99)
				field[i][j] = '?';
			else if (field[i][j] == 100)
				field[i][j] = '#';
		}
	}
	printf("x축 y축을 입력하세요:");
	scanf_s("%d %d", &a, &b);

	field[a][b] = 'o';

	for (int i = 0;a-10 <a+10 ; i++)
	{
		for (int j = 0; b-10 < b+10; j++)
		{
			printf("%c", field[i][j]);
		}
		printf("\n");
	}

	return 0;
}