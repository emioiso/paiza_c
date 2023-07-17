#include <stdio.h>
int	main(void)
{
	char str[6][6] = {
		"eight",
		"one",
		"three",
		"paiza",
		"pa13",
		"813",
	};
	for (int i = 0; i < 6; i++)
	{
		printf("%s\n",str[i]);
	}
	return (0);
}
