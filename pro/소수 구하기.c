#include "stdio.h"
int ab(int x);

int main()
{
	int i;
	int b = 0;
	for (i = 2; i < 100; i++)
	{
		if (ab(i))
		{
			printf("%d  ", i);
			b += i;
		}

	}
	printf("\n���� : %d", b);
	
}

int ab(int x) 
{
	int a;
	int	b = x / 2; // ¦���� �ȵǴϱ�
	if (x <= 1) //1���� ������ �ȵ�
		return 0;
	for (a = 2; a <= b; a++) { //a�� b���� ũ�� �ȵǱ� ������
		if (x % a == 0) //������ ���� ���� 0�� ������ �ȵ�
			return 0; 
	}
	return 1; //��ȯ��
}