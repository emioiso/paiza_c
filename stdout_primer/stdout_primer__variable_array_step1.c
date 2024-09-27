#include <stdio.h>
int main(void){
    int n;
    scanf("%d",&n);
    // printf("%d",n);
    // printf("%d",n/2);
    for(int i = 1; i <= n; i ++){
        // printf("%d",i);
        if(i == n /2 || i == n){
            printf("%d\n",i);    
        } else {
            printf("%d ",i);    
        }
    }
    return 0;
}