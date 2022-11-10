// ===== 問題URL =====
// https://paiza.jp/works/mondai/array_primer/array_primer__1dmatrix_output_step2
// Q
// ===== 以下の数列の要素数を出力してください。 =====
// 5 1 3 4 5 12 6 8 1 3
// ===== 期待する出力 =====
// 数列の全要素を改行区切りで出力してください。
// また、末尾に改行を入れ、余計な文字、空行を含んではいけません。
/*
5
1
3
4
5
12
6
8
1
3
*/

#include <stdio.h>

int main(void)
{
    int array[] = {5, 1, 3, 4, 5, 12, 6, 8, 1, 3};

    printf("%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n",
    array[0],array[1],array[2],array[3],array[4],array[5],array[6],array[7],array[8],array[9]);
    return 0;
}

// ループ早く回せるようにしたいよ〜〜〜〜><
