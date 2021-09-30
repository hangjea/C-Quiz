#include "stdio.h"
#include "string.h"
#pragma warning(disable: 4996)
int main()
{
	char name[5][80];
	char search[80];
	int i;
	for ( i = 0; i < 5; i++)
	{
		printf("문자를 입력하시오(%d번째):", i+1);
		scanf("%s", name[i]);
	}
	
	while (1)
	{
		printf("찾을 문자를 입력하세요(quit 입력시 종료):");
		scanf("%s", search);
		if (search == "quit")
			break;
		for (i = 0; i < 5; i++) {
			if (strcmp(name[i], search)==0)
			{
				printf("%d번째에 있습니다.\n", i+1);
				break;
			}
			else if(strcmp(name[i],search)!=0)
			{
				if (i == 4) {
					printf("없습니다.\n");
					break;
				}
				continue;
			}
		}
	}
}