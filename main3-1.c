#include<stdio.h>

int main (void){
    int no;

    printf("整数を入力してください：");
    scanf("%d", &no);

    if (no % 10)
    puts("その整数は10の倍数ではありません。");

    return 0;
}