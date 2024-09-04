#include <stdio.h>
int main(void){
    // 標準入力から入力される文字列の制約を確認する
    // char s[15];
    // char t[15];
    
    // scanf();を使って標準入力から値を受け取ってみる→成功
    // scanf("%s",s);
    // printf("%s\n",s);
    // scanf("%s",t);
    // printf("%s\n",t);
    
    
    
    // char str[30];
    
    // // scanf();とprintf();を二回記述するのめんどくさいからfor文を使って標準入力から受け取る→
    // for(int i = 0; i < 2; i++){
    //     scanf("%s",str);
    //     printf("%s\n",str);
    // }
    
    // fgetsで標準入力から文字列を受け取る
    char str[30];
    
    for(int i = 0; i < 2; i++){
        fgets(str,sizeof(str),stdin);
        printf("%s",str);
    }
    return(0);
}
