#include<stdio.h>

int sumup(int n)
{
    int i;
    int sum = 0;

    for (i = 1; i <= n; i++)
        sum += i;
    return sum;
}

int main(void){
    int no;

    printf("整数値：");
    scanf("%d", &no);

    printf("１から%dまでの和は%dです。\n", no, sumup(no));

    return 0;
}