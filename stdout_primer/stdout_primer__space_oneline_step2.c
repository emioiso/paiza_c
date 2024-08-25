#include <stdio.h>

int	main(void)
{
int num[4] = {8,1,3};

    for(int i = 0; i < 3; i++){
        printf("%d",num[i]);
        if(i != 2){
            printf(" ");
        }
    }
    return (0);
}
