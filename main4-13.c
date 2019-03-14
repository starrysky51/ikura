#include<stdio.h>

int main (void){
    int no, temp;
    int digits;
    do {
        printf("正の整数を入力してください：");
        scanf("%d", &no);
        if (no <= 0)
            puts("\a正でない数を入力しないでください。");
    } while (no <= 0);

    temp = no;
    digits = 0;

    while (temp > 0) {
        temp /= 10;
        digits++;
    }
    printf("%dは%d桁です。\n", no, digits);

    return 0;
}