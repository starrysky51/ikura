#include<stdio.h>

int main (void) {
    int i, j;
    int h;

    puts("ピラミッドを作ります。");
    printf("何段ですか：");
    scanf("%d", &h);

    for (i = 1; i <= h; i++) {
        for (j = 1; j <= h - 1; j++)
            putchar(' ');
        for (j = 1; j <= 2 * i - 1; j++)
            putchar('*');
        putchar('\n');
    }
    return 0;
}