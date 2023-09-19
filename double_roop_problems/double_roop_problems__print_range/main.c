#include <stdio.h>
int main(void){
    int n;
    int k;
    scanf("%d%d",&n,&k);
    // printf("%d %d\n",n,k);
    
    for(int i = 0; i < k; i++){
        for(int j = 1; j <= n; j++){
            printf("%d",j);
            if (j < n) {
                printf(" "); // 最後の数字以外にはスペースを挿入
            }
        }    
         printf("\n");
    }
    return 0;
}