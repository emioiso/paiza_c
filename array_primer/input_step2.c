// ===== 問題URL =====
// https://paiza.jp/works/mondai/array_primer/array_primer__1dmatrix_input_step2
// Q
// 10 個の整数 a_i (1 ≤ i ≤ 10) が半角スペース区切りで与えられます。
// この数列の全要素を改行区切りで出力してください。

// ===== 入力される値  =====
// 10 個の整数 a_i が半角スペース区切りで与えられます。
// 以下の形式で標準入力によって与えられます。
// a_1 a_2 ... a_9 a_10

// ===== 期待する出力 =====
// 数列の全要素を改行区切りで出力してください。
// また、末尾に改行を入れ、余計な文字、空行を含んではいけません。
// a_1
// a_2
// ...
// a_9
// a_10

#include <stdio.h>

int main(void)
{
    int a;
    int a1;
    int a2;
    int a3;
    int a4;
    int a5;
    int a6;
    int a7;
    int a8;
    int a9;

// ↑ か ↓ の変数の書き方ができる。
// 違いは、メモリ領域の並び順が違う。
// ↑ に対して ↓ のメモリ領域の並びは ■ ■ ■ ■ ■ ■ ■ ■ ■ ■
// ↑ は ■ □ ■ □ □ □ ■ ■ □ □ ■ □ ■ □ ■ ■ ■ ■ のようにメモリ領域が連続して並ばない。
// int a[10] = {};


	scanf("%d%d%d%d%d%d%d%d%d%d",&a,&a1,&a2,&a3,&a4,&a5,&a6,&a7,&a8,&a9);
	printf("%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n"
	,a,a1,a2,a3,a4,a5,a6,a7,a8,a9);

    return 0;
}

// ===== 解説 =====
// 10個の文字列が標準入力で与えれることがわかっているので整数型のデータ型であるint型の変数を10個を用意する。

