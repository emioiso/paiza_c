//Q
//すでにメッセージを表示するコードがあります。
//標準入力からメッセージを受け取ってそのまま表示するよう、
//このコードを修正してください。
//なお、標準入力のデータは、採点ボタンを押したときに自動的に割り当てられます。
//このデータは、入力タブと同じように fgets 関数と sscanf 関数 で受け取ることができます。
//採点ボタンをクリックして、正解と表示されれば演習課題クリアです！
//===== 期待する出力値 =====
//Hello

#include <stdio.h>

int main(void)
{
  char buf[100];
  fgets(buf, sizeof(buf), stdin);

  char message[100];
  sscanf(buf,"%s",message);
  printf("%s",message);
}
