#include <stdio.h>
#include <string.h>

int main(void)
{
    char s[12];

    for(int i = 0; i < 10; i++){
        fgets(s,sizeof(s),stdin);
        // printf("%s",s);    

        // 改行文字があれば取り除く
        s[strcspn(s, "\n")] = '\0';  

        // 最初の文字列はスペースをつけずに出力、それ以降はスペース付きで出力
        if (i == 0) {
            printf("%s", s);
        } else {
            printf(" %s", s);  // 2つ目以降はスペースを前に付けて出力
        }
    }
    printf("\n");  // 最後に改行を追加
    
    return 0;
}
