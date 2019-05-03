#include<stdio.h>

int count_bits(unsigned x)
{
    int bits = 0;
    while (x) {
        if (x & 1U) bits++;
        x >>= 1;
    }
    return bits;
}

int int_bits(void) {
    return count_bits(~0U);
}

void print_bits(unsigned x)
{
    int i;
    for (i = int_bits() - 1; i >= 0; i--)
        putchar(((x >> i) & 1U) ? '1' : '0');
}

int main(void)
{
    unsigned x;

    printf("非負の整数："); scanf("%u", &x);

    printf("その整数の中身は"); print_bits(x); printf("です。˜\n");

    return 0;
}