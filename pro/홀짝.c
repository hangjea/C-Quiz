#include "stdio.h"

int main()
{
	int a;
	printf("숫자 입력:");
	scanf_s("%d", &a,sizeof(a));
	if (a % 2 == 0) printf("%d 는 짝수입니다.\n", a);
	else  printf("%d 는 홀수입니다.\n", a);
	return 0;
}