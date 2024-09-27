#include <stdio.h>
int main(void){
    int n;
    scanf("%d",&n);
    // printf("%d",n);
    
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            if(j == n){
                printf("%d\n",i*j);    
            } else {
                printf("%d ",i*j);
            }
        }  
    }
    return 0;
}