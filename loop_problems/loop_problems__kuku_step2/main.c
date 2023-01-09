#include <stdio.h>

int	main(void)
{

	int	N;

	scanf("%d",&N);
	// printf("%d\n",N);

	for (int i = 1; i <= 9; i++)
	{
		// printf("%d\n", i);//1から9が出力されることを確認
		// printf("%d ", i * N);
		if(i == 9){
			printf("%d\n",i * N);
		} else {
			printf("%d ", i * N);
		}
	}


	return (0);
}
