#include<stdio.h>

int count_bits(unsigned x)
{
    int bits = 0;
    while (x) {
        if (x & 1U) bits++;
        x >>= 1;
    }
}

int int_bits(void)
{
    return count_bits(~0U);
}

void print_bits(unsigned x)
{
    int i;
    for (i = int_bits() - 1; i >= 0; i--)
        putchar(((x >> i) & 1U) ? '1' : '0');
}

unsigned lsft(unsigned x, int n)
{
    return (n <= 0 || n >= int_bits()) ? x : (x << n);
}

unsigned set(unsigned x, int pos)
{
    return x | lsft(1U, pos);
}

unsigned reset(unsigned x, int pos)
{
    return x & -lsft(1U, pos);
}

unsigned inverse(unsigned x, int pos)
{
    return x ^ lsft(1U, pos);
}

int main(void)
{
    unsigned x, pos;

    puts("符号なし整数xの第posビットを操作します。");
    printf("x   ："); scanf("%u", &x);
    printf("pos ："); scanf("%u", &pos);

    printf("\n               ="); print_bits(x);
    printf("\nset(x, pos)    ="); print_bits(set(x, pos));
    printf("\nreset(x, pos)  ="); print_bits(reset(x, pos));
    printf("\ninverse(x, pos)="); print_bits(inverse(x, pos));
    putchar('\n');

    return 0;

}