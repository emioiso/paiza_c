// ===== 問題URL =====
// https://paiza.jp/works/mondai/array_primer/array_primer__1dmatrix_output_step3
// Q
// ===== 以下の数列の 4 番目の要素を出力してください。 =====
// 5 1 3 4 5 12 6 8 1 3
// ===== 期待する出力 =====
// 数列の 4 番目の要素を出力してください。
// また、末尾に改行を入れ、余計な文字、空行を含んではいけません。
// 4

#include <stdio.h>

int main(void)
{
    int array[] = {5, 1, 3, 4, 5, 12, 6, 8, 1, 3};

    printf("\n%d\n\n", array[3]);
    return 0;
}
