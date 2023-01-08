#include <stdio.h>

int	main(void)
{

	int	N;

	scanf("%d",&N);
	// printf("N=%d\n",N);

	int sum = 0;
	for (int i = 0; i < N; i++)
	{
		int a;
		scanf("%d",&a);
		// printf("a=%d ", a);
		sum = a;
		// printf("sum=%d", sum);
		sum *= 2;
		printf("%d\n", sum);
	}
	return (0);
}
