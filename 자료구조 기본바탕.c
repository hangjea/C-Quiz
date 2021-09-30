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
	printf("이름을 입력하세요.");
	scanf("%s", p1.name);
	printf("나이를 입력하세요.");
	scanf("%d", &p1.age);
	printf("몸무게를 입력하세요.");
	scanf("%f", &p1.heigt);

	printf("이름은 : %s 나이는 %d 몸무게는 %0.1f", p1.name, p1.age, p1.heigt);
}