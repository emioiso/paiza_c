#include <stdio.h>
#include <string.h>

int main() {
    char buffer[200];  // 一行全体を格納するバッファ（サイズは適宜調整）
    char result[1000] = "";  // 結果を格納するためのバッファ（サイズは適宜調整）

    for (int i = 0; i < 10; i++) {  // 入力行数に合わせて調整
        fgets(buffer, sizeof(buffer), stdin);  // 標準入力から一行を読み取る
        buffer[strcspn(buffer, "\n")] = '\0';  // 改行文字を削除

        // スペース区切りで分割された文字列を順に処理
        char *token = strtok(buffer, " ");
        while (token != NULL) {
            strcat(result, token);
            strcat(result, " ");  // 各トークンの間にスペースを追加
            token = strtok(NULL, " ");
        }
    }

    // 最後のスペースを削除
    result[strlen(result) - 1] = '\0';

    printf("%s\n", result);  // 連結された結果を出力

    return 0;
}
