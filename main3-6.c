#include<stdio.h>

int main (void){
    int a, b;

    puts("２つの整数を入力してください");
    printf("整数a："); scanf("%d", &a);
    printf("整数b："); scanf("%d", &b);

    puts("等価式の値");
    printf("a == b の値：%d\n", a == b);
    printf("a != b の値：%d\n", a != b);

    puts("関係式の値");
    printf("a < b の値：%d\n", a < b);
    printf("a <= b の値：%d\n", a <= b);
    printf("a > b の値：%d\n", a > b);
    printf("a >= b の値：%d\n", a >= b);

    return 0;
}