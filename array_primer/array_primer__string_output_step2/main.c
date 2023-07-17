#include <stdio.h>
int	main(void)
{
	char str[5][9] = {
		"good",
		"morning",
		"paiza",
		"813",
		"pa13",
	};
	for (int i = 0; i < 5; i++)
	{
	    printf("%s\n",str[i]);
	}

	return (0);
}
