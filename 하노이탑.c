#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int st[3][100] = { 0, };      //폴 상황 배열
int cnt[3][1] = { 0, };         //폴에 있는 원반 개수

void hanoi(int n, int s, int d, int mid, int st[3][100], int cnt[3][1]);
void move(int a, int b, int st[3][100]);
void set_st(int n, int st[3][100]);

int main() {
    int n; //원반의 총 수
    int s = 1; //처음 원반 위치하는 폴
    int d = 3; //최종위치 폴
    int m = 2; //여분 폴
    int a = 0;
    int b;


    printf("원반의 총 개수를 입력하세요.\n원반의 개수 : ");

    scanf("%d", &n);

    cnt[0][0] = n; //1번 폴에 있는 원반 개수

    set_st(n, st); //초기 배열 설정

    hanoi(n, s, d, m, st, cnt);

    printf("\n**완성된 폴 상황**\n");
    for (a; a < 3; a++) {
        printf("%d번 폴 : ", a + 1);
        for (b = 0; st[a][b] != 0; b++) {
            printf("%d  ", st[a][b]);
        }
        printf("\n");
    }
    return 0;
}

void hanoi(int n, int s, int d, int mid, int st[3][100], int cnt[3][1]) { //원반 개수, 초기 원판있는 폴, 옮겨질 폴, 여분폴, 배열
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


    printf("\n현재 폴 상황\n");
    for (a; a < 3; a++) {
        printf("%d번 폴 : ", a + 1);
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
                    printf("%d번 폴에서 원반%d를 %d번 폴로 옮긴다.\n", s, st[s - 1][i - 1], d);
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

void set_st(int n, int st[3][100]) { //초기 배열 설정
    int count = 0;
    int i = n;
    for (n; count < n; count++) {
        st[0][count] = i;
        i--;
    }
}