#include<stdio.h>

int main(void){
    int x, y;
    int ave;

    puts("２つの整数入力してください。");
    printf("整数x："); scanf("%d", &x);
    printf("整数y："); scanf("%d", &y);

    ave = (x + y) / 2;

    printf("平均値の符号を反転した値は%dです。\n", -ave);

    return 0;
}