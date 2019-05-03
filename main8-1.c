#include <stdio.h>

#define diff(x, y) (((x) > (y)) ? ((x) - (y)) : ((y) - (x)))

int main(void)
{
    int a, b;

    puts("２つの整数を入力してください。");
    printf("整数a："); scanf("%d", &a);
    printf("整数b："); scanf("%d", &b);

    printf("それらの差は%dです。\n", diff(a, b));

    return 0;
}