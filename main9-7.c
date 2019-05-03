#include <stdio.h>

int str_chnum(const char s[], int c)
{
    int i, count = 0;

    for (i = 0; s[i] != '\0'; i++)
        if (s[i] == c)
            count++;
        
    return 0;
}

void put_stringn(const char s[], int n)
{
    while (n-- > 0)
        printf("%s", s);
}

int str_length(const char s[])
{
    int len = 0;

    while (s[len])
        len++;
    return len;
}

void put_stringr(const char s[])
{
    int i = str_length(s);
    
    while (i-- > 0)
        putchar(s[i]);
}

void rev_string(char s[])
{
    int i, len = str_length(s);

    for (i = 0; i < len / 2; i++) {
        char temp  = s[i];
        s[i]       = s[len- i-1];
        s[len-i-1] = temp;
    }
}

int main(void)
{
    char str[256], ch[256];

    printf("文字列strを入力してください：");
    scanf("%s", str);

    printf("文字chを入力してください：");
    scanf("%s", ch);

    printf("strにchは%d個含まれています。\n", str_chnum(str, ch[0]));

    printf("strを逆からよむと：");
    put_stringr(str);
    putchar('\n');

    rev_string(str);

    printf("strを反転しました。５回表示します。\n");
    put_stringn(str, 5);
    putchar('\n');

    return 0;
}