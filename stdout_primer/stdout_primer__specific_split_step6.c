#include <stdio.h>
#include <string.h>

int main(void) {
    char num[1001];  // 最大1000桁の数値を扱うための文字列配列
    scanf("%s", num);  // 数値を文字列として入力

    int len = strlen(num);  // 数値の桁数を取得

    // 出力ループ
    for (int i = 0; i < len; i++) {
        // 数値を出力
        printf("%c", num[i]);

        // カンマを3桁ごとに追加（ただし、最後の桁の後にはカンマを追加しない）
        if ((len - i - 1) % 3 == 0 && i != len - 1) {
            printf(",");
        }
    }

    // 最後に改行
    printf("\n");

    return 0;
}