#include <stdio.h>

int factorial(int n)
{
    int f = 1;

    while (n > 0)
        f *= n--;
    return f;
}

int main(void)
{
    int num;

    printf("整数を入力してください：");
    scanf("%d", &num);

    printf("%dの階乗は%dです。\n", num, factorial(num));

    return 0;
}
