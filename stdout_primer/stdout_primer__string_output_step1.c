#include <stdio.h>

int	main(void)
{
    char str[6] = "paiza"; 

    for(int i = 0; str[i] != '\0'; i++){
        printf("%c",str[i]);
    }
    return (0);
}