#include "stdio.h"
#pragma warning(disable: 4996)
struct a1
{
	char name[80];
	int age;
	float heigt;
};
int main()
{
	struct a1 p1;
	printf("�̸��� �Է��ϼ���.");
	scanf("%s", p1.name);
	printf("���̸� �Է��ϼ���.");
	scanf("%d", &p1.age);
	printf("�����Ը� �Է��ϼ���.");
	scanf("%f", &p1.heigt);

	printf("�̸��� : %s ���̴� %d �����Դ� %0.1f", p1.name, p1.age, p1.heigt);
}