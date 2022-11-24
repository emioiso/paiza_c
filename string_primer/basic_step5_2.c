#include <stdio.h>

int main(void)
{
    char str[1000];
    int i;

    scanf("%s",str);
    // printf("%s\n",str );


    // ===== パターン① =====
    // for(i = 0; str[i] != '\0'; ++i)
    // {
    //     printf("%d",i); //01234
    // }

    // ===== パターン② =====
    for(i = 0; str[i] != '\0'; i++)
    {
    }
    printf("%d",i); //5

    // for文のprintfは{}の外に書くと文字のカウントをしてくれる

// ===== i++ と ++i =====
// a=i++;
// aにiの値を代入してiの値を1増やす

// a=++i;
// iの値を1増やした値をaに代入する

// 後に増やすか、先に増やすかの違いですね。

    return 0;
}
