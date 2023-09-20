#include <stdio.h>
int main(void){
    int n,k;
    scanf("%d%d",&n,&k);
    // printf("%d %d\n",n,k);
    int nkArr[n][k];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < k; j++){
            scanf("%d",&nkArr[i][j]);    
            // printf("%d ",nkArr[i][j]);    
        }    
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < k; j++){
            if(nkArr[i][j] == 1){
                // printf("i = %d j = %d\n",i + 1,j + 1);
                printf("%d %d\n",i + 1,j + 1);
                break;
            }
        }    
    }
    return 0;
}