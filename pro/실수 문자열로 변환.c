#include "stdio.h"
#include "string.h"
#include "stdlib.h"
#pragma warning(disable: 4996)


int main()
{
	char name[80],result[200];
	int age;
	float height;
	char az[50], hz[50];
	printf("이름을 입력하세요.");
	scanf("%s", name);
	printf("나이를 입력하세요:");
	scanf("%d", &age);
	printf("몸무게를 입력하세요:");
	scanf("%f", &height);


	strcpy(result, name);
	strcat(result, "is ");
	sprintf(az,"%2d",age);
	strcat(result, az);
	strcat(result, " years old and his/her height is ");
	sprintf(hz, "%.1f", height);
	strcat(result, hz);
	printf("%s", result);
	return 0;
}