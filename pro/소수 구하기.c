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
	printf("\n총합 : %d", b);
	
}

int ab(int x) 
{
	int a;
	int	b = x / 2; // 짝수는 안되니깐
	if (x <= 1) //1보다 작으면 안됨
		return 0;
	for (a = 2; a <= b; a++) { //a가 b보다 크면 안되기 때문에
		if (x % a == 0) //나눠서 남은 값이 0이 나오면 안됨
			return 0; 
	}
	return 1; //반환함
}