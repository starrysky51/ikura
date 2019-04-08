#include<stdio.h>

int main(void)
{
    float a;
    double b;
    long double c;

    puts("３個の実数値を入力してください。");
    printf("float型      a："); scanf("%f", &a);
    printf("double型     b："); scanf("%lf", &b);
    printf("long float型 c："); scanf("%Lf", &c);

    printf("a = %f\n", a);
    printf("b = %f\n", b);
    printf("c = %Lf\n", c);

    return 0;
}