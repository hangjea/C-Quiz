#include "stdio.h"

int main()
{
	int a[10], b[10], c[10];
	int ed=0,i;
	for (i = 2;;i++)
	{
		if (i % 2 == 0) {
			a[ed] = i;
			ed++;
			if (ed == 10)
				break;
		}
	}

	for (i = 1,ed=0;; i++) {
		if (i % 2 == 1) {
			b[ed] = i;
			ed++;
			if (ed == 10)
				break;
		}
	}
	for (i = 0; i < 10; i++) {
		c[i] = a[i] + b[i];
	}

	for (i = 0; i < 10; i++) {
		printf("Â¦: %d  È¦: %d\nÇÕ: %d\n", a[i], b[i], c[i]);
	}
	return 0;
}