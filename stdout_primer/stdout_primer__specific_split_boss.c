# include <stdio.h>
int main(void){
    char n[1001];
    scanf("%s",n);
    int count = 0;
    for(int i = 0; n[i] != '\0'; i++){
        count++;
    }
    // printf("count = %d\n",count);
    
    for(int i = 0; i < count; i++){
        int remaning_digits = count - i - 1;
        printf("%c",n[i]);
        if(remaning_digits > 0 && remaning_digits % 3 == 0){
            printf(",");    
        }
    }
    printf("\n");    
    return(0);
}