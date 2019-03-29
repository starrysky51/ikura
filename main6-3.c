#include<stdio.h>

int cube(int x)
{
    return x * x * x;
}

int main (void){
    int n;

    printf("整数値：");
    scanf("%d", &n);

    printf("%dの３乗は%dです。\n", n, cube(n));

    return 0;
    
}