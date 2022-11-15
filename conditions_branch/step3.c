// commi 数値演算結果で分岐

// ===== 問題URL =====
// https://paiza.jp/works/mondai/conditions_branch/conditions_branch__simple_step3
// ===== Q =====
// 整数 A, B, C が与えられます。
// 式 A × B ≦ C が成立している場合はYESを、そうではない場合はNOを出力してください。
// ===== 入力される値 =====
// A B C
// ===== 期待する出力 =====
// YESまたはNOを出力してください。
// 末尾に改行を入れ、余計な文字、空行を含んではいけません。

#include <stdio.h>

int main(void)
{
    // ===== 実験 =====
    // char str[1000];
    // int A[5];

    // fgets(str, sizeof(str), stdin);
    // sscanf(str,"%d", &A);
    // printf("%d%d%d", A,A,A);

    // ===== ↑ わかんなくなっちゃった =====

    char str[1000];
    int A ;
    int B ;
    int C ;

    // ===== NOが出力されるかどうか確認 =====

    // int A = 7;
    // int B = 7;
    // int C = 1;

    fgets(str, sizeof(str), stdin);
    sscanf(str,"%d%d%d", &A, &B ,&C);
    // // printf("%d%d%d", A ,B ,C);  //2 3 7が出力されるか確認。

    if(A * B <= C)
    {
        printf("YES\n\n");
    } else {
        printf("NO\n\n");
    }

    return 0;
}
