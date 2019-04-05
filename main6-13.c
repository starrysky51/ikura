#include<stdio.h>

#define NUMBER 5
#define FAILED -1

int searchr(const int v[], int key, int n)
{
    int i;

    for (i = n - 1; i >= 0; i--) {
        if (v[i] == key)
            return i;
    }
    return FAILED;
}

int main(void)
{
    int i, ky, idx;
    int vx[NUMBER];

    for (i = 0; i < NUMBER; i++) {
        printf("vx[%d]：", i);
        scanf("%d", &vx[i]);
    }
    printf("探す値：");
    scanf("%d", &ky);

    if ((idx = searchr(vx, ky, NUMBER)) == FAILED)
        puts("\a検索に失敗しました。");
    else
        printf("%dは%d番目にあります。\n", ky, idx + 1);

    return 0;
}