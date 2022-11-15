// ===== 問題URL =====
// https://paiza.jp/works/mondai/conditions_branch/conditions_branch__simple_step2
// ===== Q =====
// 整数Nが与えられます。Nが 100 以下の場合はYESを、そうではない場合はNOを出力してください。
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
    // int N = 101;//条件分岐でNOが出るか確認。

    fgets(str, sizeof(str), stdin);
    sscanf(str,"%d",&N);
    // printf("%d\n",N );  //50(N、数字)が出力されるか確認する。

    if(N <= 100){
        printf("YES\n\n");
    } else {
        printf("NO\n\n");
    }

    return 0;
}
