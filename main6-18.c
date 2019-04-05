#include<stdio.h>

void put_count(void)
{
    static int count = 0;

    printf("put_count：%d回目\n", ++count);
}

int main(void)
{
    int i, n;

    printf("呼び出し回数：");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
        put_count();
    
    return 0;
}