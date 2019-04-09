#include <stdio.h>

enum month {
    January = 1, February, March, April, May, June,
    July, August, September, October, November, December
};

void print_season(enum month month)
{
    switch (month) {
        case March :
        case April :
        case May : 
           printf("春"); break;

        case June :
        case July :
        case August :
           printf("夏"); break;

        case September :
        case October :
        case November :
           printf("秋"); break;

        case January :
        case February :
        case December :
           printf("冬"); break;

        default:
           printf("地球に存在しない季節"); break;
    }
}

enum season select_month(void)
{
    int tmp;

    do {
        printf("何月せすか：");
        scanf("%d", &tmp);
    } while (tmp < January || tmp > December);
    return tmp;
}

int main(void)
{
    enum month your_month;

    puts("生まれた月を入力してください。");
    your_month = select_month();

    printf("あなたは");
    print_season(your_month);
    printf("に生まれたのですね。\n");

    return 0;
}