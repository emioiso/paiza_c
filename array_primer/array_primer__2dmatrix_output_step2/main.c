#include <stdio.h>

int	main(void)
{

	int	n[2][6] = {
		{6, 5, 4, 3, 2, 1},
		{3, 1, 8, 8, 1, 3}
	};

	for (int i = 0; i < 2; i++){
		// printf("i=%d \n", n[i][5]);
		// printf("%d", n[i][0]);
		for (int j = 0; j < 6; j++)
		{
			if(j >= 1){
				printf(" ");
			}
			printf("%d", n[i][j]);
		}
		printf("\n");
	}
	return (0);
}
