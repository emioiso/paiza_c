#include <stdio.h>

int	main(void)
{

	int	N;

	scanf("%d",&N);
	// printf("N=%d\n",N);

	int a[101];

	for (int i = 1; i <= N; i++)
	{
		scanf("%d",&a[i]);
		// printf("a[i]=%d ", a[i]);
	}
	// printf("\n");

	for (int i = N; i >= 1; i--)
	{
		printf("%d\n",a[i]);
	}
	// printf("\n");
	return (0);
}
