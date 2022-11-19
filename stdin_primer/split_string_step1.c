// ===== URL =====
// https://paiza.jp/works/mondai/stdin_primer/stdin_primer__split_string_step1
// ===== Q =====
// 文字列Hello paizaを、半角スペースで分割して出力してください。
// ===== 入力される値 =====
// なし
// ===== 期待する出力 =====
// Hello paizaを半角スペースで区切り、区切られた文字列を改行区切りにして 2 行で出力してください。
// また、末尾に改行を入れ、余計な文字、空行を含んではいけません。

// Hello
// paiza


#include <stdio.h>
int main(void)
{

    char str[100] = "Hello";
    char str2[100] = "paiza";

    printf("%s\n%s\n", str,str2);
    return 0;
}
