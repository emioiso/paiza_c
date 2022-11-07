//＃08:変数にデータを入れる
//C言語では、変数ごとにデータ型を指定する
//===== 整数型 =====
// #include <stdio.h>

// int main(void)
// {
//     // int number = 100;
//     int number = 100 + 30;
//     printf("%d\n", number);
//     number = 100;
//     printf("%d\n", number);
// }

//===== 文字列型 =====
#include <stdio.h>

int main(void)
{
    char greeting[100] = "Hello world";
    printf("%s\n", greeting);
    // number = 100;
    // printf("%d\n", number);
}
