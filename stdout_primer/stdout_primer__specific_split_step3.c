#include <stdio.h>
int main(void){
    int num[11];
    
    for(int i = 1; i <= 10; i++){
        scanf("%d",&num[i]);
        printf("%d,",num[i]);
    }
    return 0;
}