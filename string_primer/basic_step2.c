#include <stdio.h>

int main(void)
{
	char str[1000];

	fgets(str, sizeof(str), stdin);
	printf("\n%s\n",str);
	return 0;
}
//Q 1行で文字列 S が与えられるので、その文字列をそのまま出力してください。
//わからなかったこと
	//デフォルトで7行目がprintf("%s", ”XXXXXX”);だった。
	//期待する出力がpaizaだから""の中にpaizaを入れてた。でも、与えられる文字列がSなので間違い。
	//文字列 出力 方法 ｃ　でググって変数をprintf("%s", ”XXXXXX”)に入れることがわかった。
	//変数をprintf("%s", ”XXXXXX”)の””の中に入れてたから変数strが文字列になってしまっていた。
//調べたこと
	//http://www.isl.ne.jp/pcsp/beginC/C_Language_11.html#:~:text=%E6%96%87%E5%AD%97%E5%88%97%E3%82%92%E5%87%BA%E5%8A%9B%E3%81%95%E3%81%9B%E3%82%8B,%E3%82%92%E8%A8%98%E8%BF%B0%E3%81%97%E3%81%A6%E3%81%8F%E3%81%A0%E3%81%95%E3%81%84%E3%80%82
//問題URL
	//https://paiza.jp/works/mondai/string_primer/basic_step2
