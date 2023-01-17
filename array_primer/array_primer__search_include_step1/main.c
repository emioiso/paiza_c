#include <stdio.h>
int	main(void)
{
	int	n[11] = {10, 13, 21, 1, 6, 51, 10, 8, 15, 6};

	for (int i = 0; i < 10; i++)
	{
		if(n[i] == 6){
			printf("Yes\n");
			break;
		}
	}
	return (0);
}
