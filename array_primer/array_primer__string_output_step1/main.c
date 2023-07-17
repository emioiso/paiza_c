#include <stdio.h>
int	main(void)
{
	char str[4][6] = {
	    "Hello",
        "paiza",
        "1234",
        "pa13"
	};

    int count = 0;
    count =  sizeof(str) / sizeof(str[0]);
    printf("%d",count);
	return (0);
}
