#include <stdio.h>

enum sex { Male, Female};

enum season { Spring, Summer, Autumn, Winter };

void print_sex(enum sex sex)
{
    switch (sex) {
        case Male   : printf("男"); break;
        case Female : printf("女"); break;
    }
}

void print_season(enum season season)
{
    switch (season) {
        case Spring : printf("春"); break;
        case Summer : printf("夏"); break;
        case Autumn : printf("秋"); break;
        case Winter : printf("冬"); break;
    }
}

enum sex select_sex(void)
{
    int tmp;

    do {
        printf("0…男　1…女：");
        scanf("%d", &tmp);
    } while (tmp < Male || tmp > Female);
    return tmp;
}

enum season select_season(void)
{
    int tmp;

    do {
        printf("0…春　1…夏　2…秋　3…冬：");
        scanf("%d", &tmp);
    } while (tmp < Spring || tmp > Winter);
    return tmp;
}

int main(void)
{
    enum sex your_sex;
    enum season your_season;

    printf("あなたの性別　"); your_sex = select_sex();
    printf("生まれた季節　"); your_season = select_season();

    printf("あなたは"); print_sex(your_sex);
    printf("で、");    print_season(your_season);
    printf("に生まれたのですね。\n");

    return 0;
}