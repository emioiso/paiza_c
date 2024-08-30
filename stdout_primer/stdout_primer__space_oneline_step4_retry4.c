#include <stdio.h>
int main(void){
    for(int i = 1; i <= 10; i++){
        if(i != 10){
            printf("%d ",i);    
        } else {
            printf("%d\n",i);
        }
    }
    return(0);
}