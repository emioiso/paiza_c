//Q
//整数 1 ~ 10 を、1 から順に改行区切りで出力してください。
//問題URL
//https://paiza.jp/works/mondai/loop_problems/loop_problems__print_num_step1

#include <stdio.h>

int main(void)
{
  int a;    //整数を出力するから整数型のデータ型のintを使う。　

  a = 10;   //整数の10まで出力するから定義する。

  //printf("%d",a); //a = 10;が出力するためにprintfで確認する。

//===== while文 =====
  int i;

  i = 1;

while(i <= a)
{
    printf("%d\n",i);
    i++;
}

//===== for文 =====
//int i;    //for文を使いたいので初期値を設定したいので変数宣言をする。
//条件式のiがa以下という式がtrueだったらブロックの中の処理が実行される。
//
//   for(i = 1; i <= a; i++)
//   {
//       printf("%d\n",i);
//   }
