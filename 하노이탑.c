#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int st[3][100] = { 0, };      //�� ��Ȳ �迭
int cnt[3][1] = { 0, };         //���� �ִ� ���� ����

void hanoi(int n, int s, int d, int mid, int st[3][100], int cnt[3][1]);
void move(int a, int b, int st[3][100]);
void set_st(int n, int st[3][100]);

int main() {
    int n; //������ �� ��
    int s = 1; //ó�� ���� ��ġ�ϴ� ��
    int d = 3; //������ġ ��
    int m = 2; //���� ��
    int a = 0;
    int b;


    printf("������ �� ������ �Է��ϼ���.\n������ ���� : ");

    scanf("%d", &n);

    cnt[0][0] = n; //1�� ���� �ִ� ���� ����

    set_st(n, st); //�ʱ� �迭 ����

    hanoi(n, s, d, m, st, cnt);

    printf("\n**�ϼ��� �� ��Ȳ**\n");
    for (a; a < 3; a++) {
        printf("%d�� �� : ", a + 1);
        for (b = 0; st[a][b] != 0; b++) {
            printf("%d  ", st[a][b]);
        }
        printf("\n");
    }
    return 0;
}

void hanoi(int n, int s, int d, int mid, int st[3][100], int cnt[3][1]) { //���� ����, �ʱ� �����ִ� ��, �Ű��� ��, ������, �迭
    if (n == 1) {
        move(s, d, st, cnt);
    }
    else {
        hanoi(n - 1, s, mid, d, st, cnt);
        move(s, d, st, cnt);
        hanoi(n - 1, mid, d, s, st, cnt);
    }
}

void move(int s, int d, int st[3][100], int cnt[3][1]) {
    int i = 0;
    int j = 0;
    int a = 0;
    int b;


    printf("\n���� �� ��Ȳ\n");
    for (a; a < 3; a++) {
        printf("%d�� �� : ", a + 1);
        for (b = 0; st[a][b] != 0; b++) {
            printf("%d  ", st[a][b]);
        }
        printf("\n");
    }

    while (1) {
        if (st[s - 1][i] == 0) {
            while (1) {
                if (st[d - 1][j] == 0) {
                    cnt[s][0] - 1;
                    cnt[d][0] + 1;
                    st[d - 1][j] = st[s - 1][i - 1];
                    printf("%d�� ������ ����%d�� %d�� ���� �ű��.\n", s, st[s - 1][i - 1], d);
                    st[s - 1][i - 1] = 0;

                    break;
                }
                else
                    j++;
                continue;

            }
            break;
        }
        else
        {
            i++;
            continue;
        }
    }
}

void set_st(int n, int st[3][100]) { //�ʱ� �迭 ����
    int count = 0;
    int i = n;
    for (n; count < n; count++) {
        st[0][count] = i;
        i--;
    }
}