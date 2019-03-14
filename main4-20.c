#include<stdio.h>

int main (void){
    int i, n, count;

    printf("整数値：");
    scanf("%d", &n);

    count = 0;
    for (i = 1; i <= n; i++)
        if (n % i == 0) {
            printf("%d\n", i);
            count++;
        }
    printf("約数は%d個です。\n", count);

    return 0;
}