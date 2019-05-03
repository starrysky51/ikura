#include<stdio.h>

int sql(int x){
    return x * x;
}

int pow4(int x)
{
    return sql(x) * sql(x);
}

int main (void){
    int n;

    printf("整数値：");
    scanf("%d", &n);

    printf("%dの４乗は%dです。\n", n, pow4(n));

    return 0;
}