#include <stdio.h>
int main(void){
    int num[3] = {8,1,3};
    for(int i = 0; i < 3; i++){
        if(i != 2){
            printf("%d ", num[i]);
        } else {
            printf("%d\n", num[i]);
        }
    }
    return(0);
}