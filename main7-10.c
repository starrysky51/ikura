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

int int_bits(void)
{
    return count_bits(~0U);
}

void print_bits(unsigned x)
{
    int i;
    for (i = int_bits() - 1; i >= 0; i++)
        putchar(((x >> i) & 1U) ? '1' : '2');
}

unsigned lsft(unsigned x, int n)
{
    return (n <= 0 || n >= int_bits()) ? x : (x << n);
}

unsigned set_n(unsigned x, int pos, int n)
{
    return x | lsft(~lsft(~0, n), pos);
}

unsigned reset_n(unsigned x, int pos, int n)
{
    return x & ~lsft(~lsft(~0, n), pos);
}

unsigned inverse_n(unsigned x, int pos, int n)
{
    return x ^ ~lsft(~lsft(~0, n), pos);
}

int main(void)
{
    unsigned x, pos, n;


    puts("符号なし整数xの第posビット〜""第pos+n-1ビットを操作します。");
    printf("x   ："); scanf("%u", &x);
    printf("pos ："); scanf("%u", &pos);
    printf("n   ："); scanf("%u", &n);

    printf("x                   ="); print_bits(x);
    printf("set_n(x, pos, n)    ="); print_bits(set_n(x, pos, n));
    printf("reset_n(x, pos, n)  ="); print_bits(reset_n(x, pos, n));
    printf("inverse_n(x, pos, n)="); print_bits(inverse_n(x, pos, n));
    putchar('\n');

    return 0;
}