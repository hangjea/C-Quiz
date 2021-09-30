#include "stdio.h"
#include <stdlib.h>
#include <time.h>
#pragma warning(disable: 4996)

int a() {
	int b;
	do{
		printf(" 1~10 숫자를 입력하세요: ");
		scanf("%d", &b);
	} while (b > 10);
	return b;
}

int main()
{
	srand(time(NULL));
	int t;
	int co[100], sum = 0;
	for (int i = 1;; i++)
	{

		sum += a();

		if (sum >= 100) {
			printf("\n당신이 이겼습니다.\n");
			printf("\t\t\t\t 현재 수치: %d\n", sum);
			break;
		}
		while (1)
		{
			t = 0;
			co[i] = rand() % 10 + 1;
			for (int j = 0; j < i; j++)
			{
				if (co[i] == co[j]) {
					i -= 1;
					co[i] = rand() % 10 + 1;
					break;
				}
				else if (i - 1 == j) {
					sum += co[i];
					printf("컴퓨터가 입력한 값: %d \n", co[i]);
					if (sum >= 100) {
						printf("\n컴퓨터가 이겼습니다.\n");
						printf("\t\t\t\t 현재 수치: %d\n", sum);
						return 0;
					}
					t = 1;
					break;
				}
			}
			if (t == 1) break;

		}
		

		printf("\t\t\t\t 현재 수치: %d\n",sum);
	}
	
}
