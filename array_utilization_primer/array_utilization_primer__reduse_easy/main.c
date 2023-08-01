#include <stdio.h>
int	main(void)
{
	int multiplicationTable[10][10];
	for (int i = 1; i <= 9; i++)
	{
		for (int j = 1; j <= 9; j++)
		{
			if(j == 9){
				multiplicationTable[i][j] = i * j;
				printf("%d", multiplicationTable[i][j]);
			} else {
				multiplicationTable[i][j] = i * j;
				printf("%d ", multiplicationTable[i][j]);
			}

		}
        printf("\n");
	}
	return (0);
}
