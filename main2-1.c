#include<stdio.h>

int main(void){
    int n;

    printf("整数を入力してください。");
    scanf("%d", &n);

    printf("10を加えると%dです。\n", n + 10);
    printf("10を減じると%dです。\n", n - 10);
    printf("10を除した商は%dです。\n", n / 10);
    printf("10を除した剰余は%dです。\n", n % 10);

    return 0;
}