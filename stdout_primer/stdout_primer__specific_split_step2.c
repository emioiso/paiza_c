#include <stdio.h>

int main() {
    char str[3][11];
    for(int i = 0; i < 3; i ++){
        scanf("%s",str[i]);
        // printf("%s",str[i]);
    }
    for(int i = 0; i < 3; i ++){
        if(i > 0){
            printf("|");    
        }
        printf("%s",str[i]);
    }
    return 0;
}