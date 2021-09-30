#include "stdio.h"
#include  "stdlib.h"
#include "time.h"
#include "windows.h"

#define x 100
#define y 100

void gfield(char field[y][x]);
void display(char field[y][x],int a,int b);
void sw(char field[y][x]);

int px, py;

int main() 
{
	char field[y][x];
	char move;
	
	srand(time(NULL));
	gfield(field);
	while (1)
	{
		px = rand() % 100;
		py = rand() % 100;
		if (field[py][px] == '_')
		{
			break;
		}
	}
	display(field,px,py);

	while (1)
	{
		sw(field);
		display(field, px, py);
	}
}

void gfield(char field[y][x])
{
	int i, j;

	for (i = 0; i < x; i++)
	{
		for (j = 0; j < y; j++)
		{
			field[i][j] = (rand() % 100);
			if (field[i][j] <= 79)
				field[i][j] = '_';
			else if (field[i][j] <= 94)
				field[i][j] = 'T';
			else if (field[i][j] <= 96)
				field[i][j] = '+';
			else if (field[i][j] == 97)
				field[i][j] = '*';
			else if (field[i][j] == 98)
				field[i][j] = '?';
			else if (field[i][j] == 99)
				field[i][j] = '#';
		}
	}
	return;
}

void display(char field[y][x],int a,int b) 
{
	int i, j;
	printf("현재 위치: x : %d  y : %d\n", b, a);
	printf("\n =============================\n");
	for (i = a - 10; i <= a + 10; i++) {
		printf("\t");
		for (j = b - 10; j <= b + 10; j++) {
			if (i < 0 || i > y - 1 || j < 0 || j > x - 1)  printf(" ");
			else if (i == a && j == b) printf("o");
			else printf("%c", field[i][j]);
		}
		printf("\n");
	}
	printf("\n =============================\n");
	return;

}

void sw(char field[y][x])
{
	char move;
	int a=0, b=0;
	move = getch();
	if (move == 'a' || move == 'd')
	{
		if (move == 'a') {
			if (px != 0)b-= 1;
		}
		else if(move=='d'){ 
			if(px != 99) b += 1; 
		}
	}
	else if (move == 'w' || move == 's')
	{
		if (move == 'w') {
			if(py != 0) a -= 1;
		}
		else if(move=='s'){
			if(py!=99) a += 1;
		}
	}
	else if (move == 'x')
	{

		printf("\n게임을 종료하겠습니다.");
		exit(0);
	}
	else
		printf("\nw,a,s,d,x 외의 키를 입력하셨습니다.");

	if (field[px+a][py+b] == 'T') {

		system("cls");
		printf("===============================");
		printf("\n 그쪽으로는 이동할 수 없습니다. \n");
		printf("===============================\n");
	}
	else
	{
		system("cls");
		px += a;
		py += b;
	}
}
