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
		printf("���ڸ� �Է��Ͻÿ�(%d��°):", i+1);
		scanf("%s", name[i]);
	}
	
	while (1)
	{
		printf("ã�� ���ڸ� �Է��ϼ���(quit �Է½� ����):");
		scanf("%s", search);
		if (search == "quit")
			break;
		for (i = 0; i < 5; i++) {
			if (strcmp(name[i], search)==0)
			{
				printf("%d��°�� �ֽ��ϴ�.\n", i+1);
				break;
			}
			else if(strcmp(name[i],search)!=0)
			{
				if (i == 4) {
					printf("�����ϴ�.\n");
					break;
				}
				continue;
			}
		}
	}
}