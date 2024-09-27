#include <stdio.h>
int main(void){
    int nArray[4][4];
    
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            scanf("%d",&nArray[i][j]);
            if(j > 0 && j == 2){
                printf("%d\n",nArray[i][j]);        
            } else {
                printf("%d ",nArray[i][j]);        
            }
            // printf("nArray[%d][%d] = %d\n",i,j,nArray[i][j]);    
        }
    }
    return(0);
}