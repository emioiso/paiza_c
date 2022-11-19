// ===== URL =====
// https://paiza.jp/works/mondai/stdin_primer/stdin_primer__read_line_boss
// ===== Q =====
// s_1, s_2, s_3, ... s_999, s_1000 の 1,000 個の文字列が与えられます。
// 文字列を与えられた順番通りに出力してください。
// ===== 入力される値 =====
// 以下の形式で標準入力によって与えられます。
// 文字列 s_1, s_2, s_3, ... s_999, s_1000 が 1000 行で与えられます。

// s_1
// s_2
// s_3
// ...
// s_999
// s_1000

// ===== 期待する出力 =====
// 文字列を与えられた順番通りに出力してください。また、出力の末尾には改行を入れてください。

// s_1
// s_2
// s_3
// ...
// s_999
// s_1000

#include <stdio.h>
int main(void)
{
    char str[10000];
    char a[100];
    int i;

    // fgets(str, sizeof(str), stdin);
    // sscanf(str,"%s",str);
    // printf("%s\n", str);    //paiza0

    // fgets(str, sizeof(str), stdin);
    // sscanf(str,"%s",a);
    // printf("%s\n", a);    //paiza1

    for(i = 0; i < 1000; i++)
    {
        fgets(str, sizeof(str), stdin);
        sscanf(str,"%s",a);

        printf("%s\n",a);
    }
    return 0;
}
