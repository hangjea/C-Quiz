#include "stdio.h"
#include "stdlib.h"
#include "time.h"
#pragma warning(disable: 4996)
int main()
{
	int a,b,c;
	srand(time(NULL));
	a = rand() % 3 + 1;// 1�� ���� 2�� �ָ� 3�� ��
	for (c = 0; c != 3;)
	{
		do {
		printf("���ڸ� �Է����ּ���: (1= ���� 2=�� 3=�ָ�)");
		scanf("%d", &b, sizeof(b));
	} while (b != 1 && b != 2 && b != 3);
	
		if (a == b) {
			printf("��ǻ��: %d \n����� �����ϴ�.\n", a);
		}
		else if (a == 1)
		{
			if (b == 2) {
				c++;
				printf("��ǻ��: %d \n ����� �̰���ϴ�.", a);
			}
			else printf("��ǻ��: %d \n ����� �����ϴ�.", a);
		}
		else if (a == 2) {
			if (b == 3) {
				c++;
				printf("��ǻ��: %d \n����� �̰���ϴ�.\n", a);
			}
			else printf("��ǻ��: %d \n����� �����ϴ�.\n", a);
		}
		else if (a == 3)
		{
			if (b == 1) {
				c++;
				printf("��ǻ��: %d \n����� �̰���ϴ�.\n", a);
			}
			else printf("��ǻ��: %d \n����� �����ϴ�.\n", a);
		}
	}
	return 0;
}