#include <stdio.h>

int main(void)
{
	char str[1000];
	int i;

	fgets(str, sizeof(str), stdin);
	scanf("%d",&i);
	printf("%c",str[i-1]);
	return 0;
}

//Q文字列 S と整数 i が与えられるので、 S の i 文字目を出力してください。
//
//scanfは標準入力から受け取っている。
//%dはint型の整数を出力。
//&iは変数のメモリアドレス
//printf("%s",str);
//printf("%d",i);
//paiza
//01234
//与えられる整数iは2番目を指している。
//期待する出力はpaizaのa
//aは1番目だから10行目のprintf("%c",str[i-1]);になる。
//わからないこと
	//%c
		//char型1つを表す指定子。1文字として出力する。文字型。
	//%d
		//10進数で出力する。整数型。
	//%s
		//現在のアドレスを先頭に終端文字(NULL)が現れるまでの連続したメモリ上のデータを表す指定子。
		//文字列として出力する。文字列
	//調べたこと
		//http://www9.plala.or.jp/sgwr-t/c/sec05.html

