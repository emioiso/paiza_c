#include <stdio.h>
int main(void){
    for(int i = 1; i <= 1000; i++){
        if(i != 1000){
            printf("%d ",i);    
        } else {
            printf("%d\n",i);
        }
    }
    return(0);
}