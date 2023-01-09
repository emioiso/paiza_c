#include <stdio.h>

int	main(void)
{

	int	N;

	scanf("%d",&N);
	// printf("%d\n",N);

	int count = 1;
	for (int i = 1; i <= N; i++)
	{
		// printf("i=%d\n", i);
		count *= 2;
		printf("%d\n", count);
	}
	return (0);
}
