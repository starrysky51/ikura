#include <stdio.h>

#define alert2() (printf("\a\a"))

#define puts_alert2(str) ( alert2(), puts(str))

int main(void)
{
    int n;

    printf("整数を入力してください：");
    scanf("%d", &n);

    if (n)
       puts_alert2("その数はゼロではありません。");
    else
       puts_alert2("その数ゼロです。");

       return 0;
}