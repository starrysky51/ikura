#include<stdio.h>

int main (void) {
    int i, j;
    int h;

    puts("下向き数字ピラミッドを作ります。");
    printf("何段ですか：");
    scanf("%d", &h);

    for (i = 1; i <= h; i++) {
        for (j = 1; j <= i - 1; j++)
            putchar(' ');
        for (j = 1; j <= 2 * (h - 1) + 1; j++)
            printf("%d", i % 10);
        putchar('\n');
    }
    return 0;
}