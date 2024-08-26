#include <stdio.h>

int	main(void)
{
    for(int i = 1; i <= 1000; i++){
        printf("%d",i);
        if(i < 1000){
            printf(" ");
        }
    }
    return (0);
}