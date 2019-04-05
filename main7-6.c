#include<stdio.h>

int main(void)
{
    unsigned a, b, c;

    printf("a："); scanf("%u", &a);
    printf("b："); scanf("%u", &b);
    printf("c："); scanf("%u", &c);

    printf("a & b == b & cの値は%uです。\n", a & b == b & c);

    return 0;
}