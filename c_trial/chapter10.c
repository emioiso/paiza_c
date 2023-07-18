#include <stdio.h>

int main(void) {
  char buf[100];
  fgets(buf, sizeof(buf), stdin);

  int number;
  sscanf(buf, "%d", &number);
  printf("%d円\n", number * 100);
}
//sscanf関数で整数を格納する変数numberを指定する時
//&をつけています。
