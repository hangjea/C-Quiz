#include "stdio.h"
#include "stdlib.h"

int main()
{
    int a = 5;
    for (int i = 0; i < a; i++) {
        for (int j = a - 1; j > i; j--) {
            printf(" ");
        }

        for (int j = 0; j < 2 * i + 1; j++) {
            printf("%d",abs((j+1)-(i+1))+1);
        }
        printf("\n");
    }
    for (int i = 1; i < a; i++) {
        for (int j = 0; j < i; j++) {
            printf(" ");
        }

        for (int j = 2 * a - 1; j > 2 * i; j--) {
            printf("%d",abs((i+5)-j)+1);
        }
        printf("\n");
    }
}