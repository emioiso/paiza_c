#include <stdio.h>
int main(void){
    int n;
    scanf("%d",&n);
    // printf("%d",n);
    
    for(int i = 0; i < n; i++ ){
        for (int j = 1; j <= 5; j++) {
            printf("%d", j);
            if (j < 5) {
                printf(" "); // 最後の数字以外にはスペースを挿入
            }
        }
        printf("\n"); // 改行
    }
    return 0;
}