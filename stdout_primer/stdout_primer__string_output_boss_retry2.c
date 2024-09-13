#include <stdio.h>
int main(void){
    char str[11][1001];
    for(int i = 0; i < 10; i++){
        scanf("%s\n",str[i]);
        // printf("%s",str[i]);
    }
    for(int i = 0; i < 10; i++){
        printf("%s\n",str[i]);
    }
    return 0;
}