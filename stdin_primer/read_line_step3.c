//Q
//文字列 s, t, u が 3 行で与えられるので、s, t, u の 3 行をそのまま出力してください。
//問題URL
//https://paiza.jp/works/mondai/stdin_primer/stdin_primer__read_line_step3

#include <stdio.h>

int main(void)
{
    char s[1000];
    char t[1000];
    char u[1000];

    fgets(s, sizeof(s), stdin);
    fgets(t, sizeof(t), stdin);
    fgets(u, sizeof(u), stdin);

    printf("%s%s%s",s,t,u);

    return 0;
}
//===== 理解したこと =====
//①
//printf("%s",s);
//printf("%s",t);
//printf("%s",u);
// ↑ 書いてたから1行にまとめてスマートに書きたいと思ってた。

//printf("%s","%s","%s",s,t,u);
//printfを一行だけ書いて出力使用としたらできなかった。
//===== 添削 =====
//printf("%s%s%s",s,t,u);って書いて
//3つの%sを""の中に書くとprintfを一行だけでfgetsで与えられた文字列を出力できる。

//②
//fgets(s, sizeof(s), stdin);
//fgets(t, sizeof(t), stdin);
//fgets(u, sizeof(u), stdin);
// ↑ 書いてたから1行にまとめてスマートに書きたいと思ってた。

