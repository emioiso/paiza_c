#include <stdio.h>
#include <string.h>

int main() {
    char input[30000];  // 十分に大きなバッファサイズにする
    char *token;        // 各トークン（単語）を格納するポインタ

    // 標準入力から1行全体を読み取る
    fgets(input, sizeof(input), stdin);

    // スペースで区切られた最初の単語を取得
    token = strtok(input, " ");
    
    // 取得した単語を改行で区切って順に出力
    while (token != NULL) {
        printf("%s\n", token);
        token = strtok(NULL, " ");  // 次の単語を取得
    }

    return 0;
}

