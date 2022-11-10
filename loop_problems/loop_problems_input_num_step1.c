//Q
//10 個の整数 K_1, K_2, ..., K_10 が与えられます。
//これらを受け取り、改行区切りで出力してください。
//入力される値
//K_1 K_2 ... K_10
//問題URL
//https://paiza.jp/works/mondai/loop_problems/loop_problems__input_num_step1

#include <stdio.h>

int main(void)
{
    int ten[10] = {};

    scanf("%d%d%d%d%d%d%d%d%d%d",
    &ten[0], &ten[1], &ten[2], &ten[3], &ten[4], &ten[5], &ten[6], &ten[7], &ten[8], &ten[9]);
    printf("%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n",
    ten[0],ten[1],ten[2],ten[3],ten[4],ten[5],ten[6],ten[7],ten[8],ten[9]);

    return 0;
}
// ループ書いていないのに正解しちゃった！
