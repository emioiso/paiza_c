#include <stdio.h>

int main(void)
{
    char str[1000];
    //fgets(str, sizeof(str), stdin);
    printf("\n%spaiza\n\n", str);
    return 0;
}
//./a.out はバイナリ（2進数）ファイル（PCが読めるファイル）。
//./a.outは実行ファイル
//fgets(str, sizeof(str), stdin);のfgetsは標準入力（ターミナルで入力される）を受け取って
//printf("\n%spaiza\n\n", str);の\n%spaiza\n\nの部分を返す。
//https://paiza.jp/works/mondai/string_primer/basic_step1
