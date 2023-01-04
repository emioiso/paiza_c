#include <stdio.h>

int	main(void)
{
	int	n[3][4] = {
		{1, 2, 3, 4},
		{6, 5, 4, 3},
		{3, 1, 8, 1},
	};
	printf("%lu\n", sizeof(n[0]) / sizeof(n[3][4]));
	return (0);
}
