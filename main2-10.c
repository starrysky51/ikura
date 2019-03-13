#include<stdio.h>

int main(void){
    int a, b;

    printf("２つの整数を入力してください。");

    printf("整数a："); scanf("%d", &a);
    printf("整数b："); scanf("%d", &a);

    printf("aの値はbの%f%%です。\n", (double)a / b * 100.0);

    return 0;

}