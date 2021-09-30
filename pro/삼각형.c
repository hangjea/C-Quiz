#include "stdio.h"

void print_char(char c, int n);

int main()
{
	print_char('*', 1);
	return 0;
}
void print_char(char c, int n) {
	int i = 1;
	while (i <= 10) {
		while (n <= i)
		{
			putchar(c);
			n++;
		}
		printf("\n");
		n = 1;
		i++;
	}
}