#include<stdio.h>

int point[7];

void print_success(void);

int main(void)
{
    int i;
    extern int point[7];

    puts("７人の点数を入力してください。");
    for (i = 0; i < 7; i++) {
        printf("%d：", i + 1);
        scanf("%d", &point[i]);
    }

    print_success();

    return 0;
}

void print_success(void)
{
    int i;
    extern int point[7];

    puts("合格者一覧表");
    puts("------------");
    for (i = 0; i < 7; i++) {
        if (point[i] >= 60)
            printf("%d番：%d\n", i + 1, point[i]);
    }
    puts("------------");
}