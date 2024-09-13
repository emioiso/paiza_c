#include <stdio.h>

int main(void){
    char str[10][11];
    for(int i = 0; i < 10; i++){
        scanf("%s",str[i]);
        // printf("%s",str[i]);
    }
    for(int i = 0; i < 10; i++){
        if(i > 0){
            printf(" ");
        }
        printf("%s",str[i]);
    }
    return(0);