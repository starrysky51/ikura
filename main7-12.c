#include<stdio.h>
#include<limits.h>

int main(void)
{
    unsigned a;
    unsigned b;

    puts("符号なし整数値の和と積を求めます。");
    printf("UINT_MAXは%uです。\n", UINT_MAX);
    printf("UNIT_MAXを超えた演算結果は(UNIT_MAX + 1)で割った剰余となります。\n");
    printf("a："); scanf("%u", &a);
    printf("b："); scanf("%u", &b);

    printf("a + b = %u\n", a + b);
    printf("a * b = %u\n", a * b);

    return 0;
}