#include "stdio.h"
#include <stdlib.h>
#include <time.h>
#pragma warning(disable: 4996)

int a() {
	int b;
	do{
		printf(" 1~10 ���ڸ� �Է��ϼ���: ");
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
			printf("\n����� �̰���ϴ�.\n");
			printf("\t\t\t\t ���� ��ġ: %d\n", sum);
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
					printf("��ǻ�Ͱ� �Է��� ��: %d \n", co[i]);
					if (sum >= 100) {
						printf("\n��ǻ�Ͱ� �̰���ϴ�.\n");
						printf("\t\t\t\t ���� ��ġ: %d\n", sum);
						return 0;
					}
					t = 1;
					break;
				}
			}
			if (t == 1) break;

		}
		

		printf("\t\t\t\t ���� ��ġ: %d\n",sum);
	}
	
}
