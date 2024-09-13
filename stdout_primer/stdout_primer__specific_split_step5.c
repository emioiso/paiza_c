#include <stdio.h>
int main(void){
    int num[11];
    
    for(int i = 0; i <= 9; i++){
        scanf("%d",&num[i]);
        // printf("%d",num[i]);
        // printf("%d",i);
        if(i == 0){
            printf("%d |",num[i]);    
        } else if(i == 9){
            printf(" %d",num[i]);    
        } else {
            printf(" %d |",num[i]);    
        }
    }
    return 0;
}