#include <stdio.h>

int	main(void)
{
    for(int i = 1; i <= 10; i++){
        printf("%d",i);
        if(i < 10){
            printf(" ");
        }
    }
    return (0);
}
