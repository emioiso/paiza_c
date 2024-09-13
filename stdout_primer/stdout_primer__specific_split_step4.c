#include <stdio.h>
int main(void){
    int num[11];
    
    for(int i = 1; i <= 10; i++){
        scanf("%d",&num[i]);
        if(i == 10){
            printf("%d\n",num[i]);    
        } else if(i > 0){
            printf("%d,",num[i]);
        }
    }
    return 0;
}