// ===== 問題URL =====
// https://paiza.jp/works/mondai/conditions_branch/conditions_branch__simple_step4
// ===== Q =====
// 整数 N が与えられます。
// Nが 0 ではない場合はYESを、 0 である場合はNOを出力してください。
// ===== 入力される値 =====
// N
// ===== 期待する出力 =====
// YESまたはNOを出力してください。
// 末尾に改行を入れ、余計な文字、空行を含んではいけません。

#include <stdio.h>

int main(void)
{
    char str[1000];
    int N;

    // ===== NOのver =====
    // int N = 0;

    fgets(str, sizeof(str), stdin);
    sscanf(str, "%d", &N);
    // printf("%d", N);    //数字が出るかどうか確認。 5

    if(N != 0){
        printf("YES\n\n");
    } else {
        printf("NO\n\n");
    }
    return 0;
}
