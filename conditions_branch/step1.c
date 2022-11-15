// ===== 問題URL =====
// https://paiza.jp/works/mondai/conditions_branch/conditions_branch__simple_step1
// ===== Q =====
// 文字列Sが与えられます。Sがpaizaと一致する場合はYESを、一致しない場合はNOを出力してください。
// ===== 入力される値 =====
// S
// ===== 期待する出力 =====
// YESまたはNOを出力してください。
// 末尾に改行を入れ、余計な文字、空行を含んではいけません。

#include <stdio.h>
#include <string.h>

int main(void)
{
    char buf[1000];
    char S[5];
    // char S[] = "emi";    //条件分岐でNOが出るか確認。

    fgets(buf, sizeof(buf), stdin);
    sscanf(buf, "%s", S);
    // printf("%s", S);    //paiza


    if (strcmp(S, "paiza") == 0){
        printf("YES\n\n");
    } else {
        printf("NO\n\n");
    }
    return 0;
}
