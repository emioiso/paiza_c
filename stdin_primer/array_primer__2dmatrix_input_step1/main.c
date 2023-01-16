#include <stdio.h>

int	main(void)
{

	int	n[2][5] = {
		{1, 3, 5, 7},
		{8, 1, 3, 8}
	};
	for (int i = 0; i < 4; i++)
	{
		printf("%d", n[0][i]);
		if(n[0][i] != 7){
			printf(" ");
		}
	}
	printf("\n");

	for (int i = 0; i < 4; i++)
	{
		printf("%d", n[1][i]);
		if(i != 3){
			printf(" ");
		}
	}
	printf("\n");

	return (0);
}
