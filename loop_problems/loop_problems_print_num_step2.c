//Q
//正の整数 N が与えられます。
//1 ~ N の整数を 1 から順に改行区切りで出力してください。
//問題URL
//https://paiza.jp/works/mondai/loop_problems/loop_problems__print_num_step2

//===== タスク整理 =====
//【】正の整数 N が与えらるのでNを出力する。
//【】N回分繰り返し文を改行を入れて書く。
//【】整数を出力したいからデフォルトの文字列を一行出力するfgetsは使わない説。
//【】fgetsを使わないならscanfを使う説。

#include <stdio.h>

int main(void)
{
    int str;

    scanf("%d", &str);
    // printf("%d", str);

    int i;

	i = 1;

	while (i <= str)
	{
		printf("%d\n", i);
		i++;
	}

	return 0;
}

//===== for =====
// #include <stdio.h>

// int main(void)
// {
//     int str;

//     scanf("%d", &str);
//     // printf("%d", str);

//     int i;

//      for(i = 1; i <=str; i++)
//      {
//          printf("%d\n",i);
//      }

//     return 0;
// }

//===== 実験してみた =====
//デフォルトのfgetsでfor文書いたらSegmentation fault (core dumped)というエラーがでた。

// #include <stdio.h>

// int main(void)
// {
//     char str[1000];
//     fgets(str, sizeof(str), stdin);
//     printf("%s", str);

//     int i;

//      for(i = 1; i <=str; i++)
//      {
//          printf("%s\n",i);
//      }

//     return 0;
// }
