#include <stdio.h>

int main(void) {
    char n[1001];
    scanf("%s",n);
    // printf("%s",n);
    // printf("%c",n[0]);
    
    int count = 0;
    for(int i = 0; n[i] != '\0'; i++){
        count++;
    }
    // printf("%d",count);
    
    for(int i = 0; i < count; i++){
        // printf("i = %d",i);
        // 文字列がcountの数と一致したら数字と改行を追加
        // n[i] - '0' の意味：文字 '0' のASCIIコードを引くことで、文字型の数字を実際の数値に変換している。
        if(i + 1 == count){
            printf("%d\n",n[i] - '0');
        // iの添字が３で割り切れる数であれば数字と','を追加
        } else if((i + 1) % 3 == 0){
             printf("%d,", n[i] - '0');
        // それ以外の時は数字を追加
        } else {
             printf("%d", n[i] - '0');
        }
    }
    return(0);
}