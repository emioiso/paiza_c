// ===== 問題URL =====
// https://paiza.jp/works/mondai/array_primer/array_primer__1dmatrix_output_step1
// Q
// ===== 以下の数列の要素数を出力してください。 =====
// 5 1 3 4 5 12 6 8 1 3
// ===== 期待する出力 =====
// 10


#include <stdio.h>

int main

(void)
{
    int array[] = {5, 1, 3, 4, 5, 12, 6, 8, 1, 3};

    printf("%zu\n", sizeof(array) / sizeof(array[0]));
    // 配列全体の大きさ÷要素１個分の大きさ とすれば、要素数を算出できる。
}

