#include "stdio.h"

int main()
{
	int a;
	printf("���� �Է�:");
	scanf_s("%d", &a,sizeof(a));
	if (a % 2 == 0) printf("%d �� ¦���Դϴ�.\n", a);
	else  printf("%d �� Ȧ���Դϴ�.\n", a);
	return 0;
}