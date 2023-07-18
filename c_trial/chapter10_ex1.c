// 整数データを受け取って表示しよう
#include <stdio.h>

int main(void)
{
  char buf[100];
  fgets(buf, sizeof(buf), stdin);

  int number;
  sscanf(buf,"%d",&number);
  printf("%d\n", number);
}
