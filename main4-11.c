#include<stdio.h>

int main (void){
    int i, no;

    printf("正の整数：");
    scanf("%d", &no);

    while (no-- > 0)
        puts("*");
    
    return 0;
}