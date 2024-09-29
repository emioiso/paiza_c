#include <stdio.h>
int main(void){
    int n,m;
    scanf("%d %d\n",&n,&m);
    // printf("%d %d\n",n,m);
    for(int i = 1; i <= n; i ++){
        if(i != n){
            printf("%d ",i);    
        } else {
            printf("%d\n",i);    
        }
    }
    for(int i = 1; i <= m; i ++){
        if(i != m){
            printf("%d ",i);    
        } else {
            printf("%d\n",i);    
        }
    }
    return 0;
}