#include <stdio.h>

int	main(void)
{
	int	N;

	scanf("%d",&N);
	// printf("%d\n",N);

	int sum = 0;
	int a[101];
	for (int i = 1; i <= N; i++)
	{
		scanf("%d",&a[i]);
		// printf("a=%d ",a[i]);
	}
	// printf("\n");

	int b[101];
	for (int j = 1; j <= N; j++)
	{
		scanf("%d",&b[j]);
		// printf("b=%d ",b[j]);
	}
	// printf("\n");
	for (int k = 1; k <= N; k++)
	{
		// printf("a=%d b=%d\n", a[k],b[k]);
		sum = a[k] - b[k];
		printf("%d\n", sum);
	}
	return (0);
}
