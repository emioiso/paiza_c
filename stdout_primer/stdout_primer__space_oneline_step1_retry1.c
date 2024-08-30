#include <stdio.h>
int main(void){
    int num = 1;
    for(int i = 0; i < 2; i++){
        if(i != 1){
            printf("%d ",num);
        } else {
            printf("%d\n",num);
        }       
    }
    return(0);
}
