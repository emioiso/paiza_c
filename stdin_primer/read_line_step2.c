//Q
//文字列 s と t が 2 行で与えられるので、s と t の 2 行をそのまま出力してください。
//問題URL
//https://paiza.jp/works/mondai/stdin_primer/stdin_primer__read_line_step2

#include <stdio.h>

int main(void)
{
    char s[1000];
    char t[1000];

    fgets(s, sizeof(s), stdin);
    fgets(t, sizeof(t), stdin);
    printf("%s", s);
    printf("%s", t);

    return 0;
}
