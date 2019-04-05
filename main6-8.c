#include<stdio.h>

int scan_int(void)
{
    int temp;

    printf("整数値：");
    scanf("%d", &temp);

    return temp;
}

int ave_of(int a, int b)
{
    return (a + b) / 2;
}

int main(void)
{
    int n1 = scan_int();
    int n2 = scan_int();
    int n3 = scan_int();
    int ave;

    if ((ave = ave_of(n1, n2)) == 0)
        printf("n1とn2の平均値は0です。\n");
    else if (ave > 0)
        printf("n1とn2の平均値は正で値は%dです。\n", ave);
    else
        printf("n1とn2の平均値は負で値は%dです。\n", ave);

    if ((ave = ave_of(n2, n3)) == 0)
        printf("n2とn3の平均値は0です。\n");
    else if (ave > 0)
        printf("n2とn3の平均値は正で値は%dです。\n", ave);
    else
        printf("n2とn3の平均値は負で値は%dです。\n", ave);

    if ((ave = ave_of(n3, n1)) == 0)
        printf("n3とn1の平均値は0です。\n");
    else if (ave > 0)
        printf("n3とn1の平均値は正で値は%dです。\n", ave);
    else
        printf("n3とn1の平均値は負で値は%dです。\n", ave);

    return 0;
    
    
    
}