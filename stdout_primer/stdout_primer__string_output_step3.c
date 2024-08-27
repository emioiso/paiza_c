#include <stdio.h>
//strcspn関数を使うときに必要なヘッダーファイル
#include <string.h>

int main() {
    char str1[100];  // 1つ目の文字列用のバッファ
    char str2[100];  // 2つ目の文字列用のバッファ

    // printf("1つ目の文字列を入力してください: ");
    fgets(str1, sizeof(str1), stdin);  // 1つ目の文字列を標準入力から取得

    // printf("2つ目の文字列を入力してください: ");
    fgets(str2, sizeof(str2), stdin);  // 2つ目の文字列を標準入力から取得

    // fgetsで取得した文字列の末尾には改行文字が含まれているので、削除します
    str1[strcspn(str1, "\n")] = '\0';  // 改行文字を終端文字('\0')に置き換える
    str2[strcspn(str2, "\n")] = '\0';  // 改行文字を終端文字('\0')に置き換える

    // printf("入力された文字列は:\n");
    // printf("1つ目: %s\n", str1);
    // printf("2つ目: %s\n", str2);
    
    printf("%s\n", str1);
    printf("%s\n", str2);

    return 0;
}
