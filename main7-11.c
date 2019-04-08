#include<stdio.h>

int main(void)
{
    int n;

    printf("正の整数値：");
    scanf("%d", &n);

    printf("８進数は0%oです。\n", n);
    printf("16進数は0%xです。\n", n);

    return 0;
}