#include <stdio.h>

int	main(void)
{

	int	n;

	scanf("%d",&n);
	// printf("%d\n",n);

	int m;
	for (int i = 1; i <= n; i++)
	{
		scanf("%d",&m);
		// printf("m=%d ", m);
		// printf("i=%d ", i);
		printf("%d\n", m * i);
	}

	return (0);
}
