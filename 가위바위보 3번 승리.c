#include "stdio.h"
#include "stdlib.h"
#include "time.h"
#pragma warning(disable: 4996)
int main()
{
	int a,b,c;
	srand(time(NULL));
	a = rand() % 3 + 1;// 1는 가위 2는 주먹 3은 보
	for (c = 0; c != 3;)
	{
		do {
		printf("숫자를 입력해주세요: (1= 가위 2=보 3=주먹)");
		scanf("%d", &b, sizeof(b));
	} while (b != 1 && b != 2 && b != 3);
	
		if (a == b) {
			printf("컴퓨터: %d \n당신이 비겼습니다.\n", a);
		}
		else if (a == 1)
		{
			if (b == 2) {
				c++;
				printf("컴퓨터: %d \n 당신이 이겼습니다.", a);
			}
			else printf("컴퓨터: %d \n 당신이 졌습니다.", a);
		}
		else if (a == 2) {
			if (b == 3) {
				c++;
				printf("컴퓨터: %d \n당신이 이겼습니다.\n", a);
			}
			else printf("컴퓨터: %d \n당신이 졌습니다.\n", a);
		}
		else if (a == 3)
		{
			if (b == 1) {
				c++;
				printf("컴퓨터: %d \n당신이 이겼습니다.\n", a);
			}
			else printf("컴퓨터: %d \n당신이 졌습니다.\n", a);
		}
	}
	return 0;
}