#include<stdio.h>
#include<limits.h>

int main(void)
{
    puts("本環境での各整数型の値の範囲");
    printf("signed short int : %d ~ %d\n", SHRT_MIN, SHRT_MAX);
    printf("signed int       : %d ~ %d\n", INT_MIN  , INT_MAX);
    printf("signed long int  : %ld ~ &ld\n", LONG_MIN , LONG_MAX);

    printf("unsigned short int : %u ~ %u\n", 0      , USHRT_MAX);
    printf("unsigned int       : %u ~ %u\n", 0      , UINT_MAX);
    printf("unsigned long int  : %lu ~ %lu\n", 0      , ULONG_MAX);

    return 0;
}