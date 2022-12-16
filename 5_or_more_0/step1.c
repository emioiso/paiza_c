// https://paiza.jp/works/mondai/prob60/5_or_more_0
// ===== 入力される値 =====
// n
// ===== 期待する出力 =====
// nに1を足した数値を出力してください。
// 最後は改行し、余計な文字、空行を含んではいけません。

#include <stdio.h>
int main(void)
{
    int n;

    scanf("%d",&n);
    printf("%d\n",n + 1);

    return 0;
}
