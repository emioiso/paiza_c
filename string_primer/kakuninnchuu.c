//問題URL
//https://paiza.jp/works/mondai/string_primer/basic_step6
//Q
//文字列 S と文字 c が与えられるので、 c は S の何文字目に現れるかを調べてください。


//【ｘ】まずは文字列sを出力してみる
//【ｘ】次にループで文字列sを1文字ずつ出力してみる
//【】1文字ずつ出した中から文字cを探して出力してみる
//【】最後に文字cが文字列sの何番目かを出力する

#include <stdio.h>
#include <string.h>

int main(void){
    char s[10000];
    char c[10000];

    //fgets(s, sizeof(s), stdin);
    //fgets(c, sizeof(c), stdin);

    //printf("%s", s);
    //printf("%s", c);

    for(int i = 0; i < strlen(s); i++)
    {
        printf("s[%d] = %c\n", i, s[i]);
    if (strcmp(c, s) == 0)
    {
        printf("%s",c);
    }
    }

    return 0;

}



/*
//===== 頭の中を整理　=====
//【x】文字列　S を出力する必要がありそう。
//【x】文字　c　を出力する必要がありそう。
//【】文字　c と文字列　S を比較する必要がありそう。
//【】文字　c と文字列　S を比較して重複した文字が何番目か調べた方がいいかも。

#include <stdio.h>
#include <string.h>

int main(void){

    char str[10100];
    char c[10000];
    int i;

    fgets(str, sizeof(str), stdin);
    //scanf("%c", &c);
    fgets(c, sizeof(c), stdin);

    printf("%s", str);
    //printf("%c", &c);
    printf("%s", c);

    for(int i = 0; i < strlen(str); i++)
    {
        printf("str[%d] = %c\n", i, str[i]);
    }

    return 0;
}
*/
