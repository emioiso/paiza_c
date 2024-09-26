#include <stdio.h>
int main(void){
    int numuberArrey[3][3] = {
        {0,8},
        {1,3}
    };
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            if(j == 1){
                printf(" ");    
            }
            printf("%d",numuberArrey[i][j]);
        }   
        printf("\n");
    }
    return 0;
}