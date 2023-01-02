#include <stdio.h>

int	main(void)
{

	int	n[2][6] = {
		{1, 2, 3, 4, 5, 6},
		{8, 1, 3, 3, 1, 8}
	};

	int count =  0;
	for (int i = 0; i < 2; i++)
	{
		// printf("%d\n", n[i][6]);
		for (int j = 0; j < 6; j++)
		{
			// printf("n[%d][%d]=%d\n", i,j,n[i][j]);
			count++;
		}
		// printf("\n");
	}
	printf("%d\n", count);

	return (0);
}



