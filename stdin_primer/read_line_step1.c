//Q
//文字列 s が 1 行で与えられるので s をそのまま出力してください。
//問題URL
//https://paiza.jp/works/mondai/stdin_primer/stdin_primer__read_line_step1

#include <stdio.h>

int main(void)
{

    char str[1000];
    fgets(str, sizeof(str), stdin);
    printf("%s",str);
    return 0;
}
