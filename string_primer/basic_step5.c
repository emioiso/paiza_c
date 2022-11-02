//問題URL
//https://paiza.jp/works/mondai/string_primer/basic_step5

//Q
//1 行で文字列 S が与えられるので、 S の文字数を出力してください。

#include <stdio.h>
#include <string.h>

int main(void)
{
	int str[1000];
	fgets(str, sizeof(str), stdin);

	//for (int i = 0; i < strlen(str); i++)
	//{
		//printf("%c", str[i]);
	//}

    printf("%d",strlen(str));

	return 0;
}
