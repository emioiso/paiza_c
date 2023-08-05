#include <stdio.h>
int	main(void)
{
    char s[10001]; // 最大長さ10000の文字列を受け取るための配列
    int i, j; // 開始位置iと終了位置jを受け取る変数

    // 文字列とi, jを入力
    scanf("%s %d %d", s, &i, &j);
    // printf("%s %d %d", s, i, j);
    for (int k = i - 1; k < j; k++) {
        printf("%c", s[k]);
    }
    printf("\n");
	return (0);
}
