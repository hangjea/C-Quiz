#include "stdio.h"

int main()
{
	int a[10];
	int i,max=0,min=9999,b=0;
	for (i = 0; i < 10; i++)
	{
		scanf_s("%d", &a[i]);
	}
	for (i = 0; i < 10; i++)
	{
		b += a[i];
		if (i == 9)
		{
			b /= i+1;
			printf(" ��հ�:%d\n", b);
		}

		if (a[i] < min)
		{
			min = a[i];
		}

		if (a[i] > max)
		{
			max = a[i];
		}
	}
	printf("�ּҰ�:%d\n �ִ밪:%d", min, max);
}