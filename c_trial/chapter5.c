#include <stdio.h>

int main(void)
{
//===== 文字列 =====
//文字列にしたい文字をダブルクォーテーションで囲むよ。
//\nは改行だよ。出力するときに見やすくする為に使っているよ。
	printf("Hello world\n");//Hello world
	printf("100\n");//この100は整数ではなく、100という文字を出力している。
	printf("100 + 30\n");//この100は整数ではなく、100 + 30という文字を出力している。

//===== 整数 =====
	printf("%d\n",100);//整数としての100を出力している。
	printf("%d\n",100 + 30);//整数としての130を出力している。

//===== printf =====
//fは書式を意味するフォーマットのf
//書式をつけて書式を付けてデータを表示できます。

//===== %d =====
//数値データを表示する為の書式。
}
