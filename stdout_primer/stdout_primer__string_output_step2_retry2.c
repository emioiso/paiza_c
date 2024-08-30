#include <stdio.h>

int main(void)
{
    char str[2][10] = {"paiza", "learning"};
    
    for (int i = 0; i < 2; i++) {\
        if(i != 1){
            printf("%s ", str[i]);    
        } else {
            printf("%s\n", str[i]);    
        }
    }
    return 0;
}