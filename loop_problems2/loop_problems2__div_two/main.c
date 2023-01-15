#include <stdio.h>

int	main(void)
{

	int	n;

	scanf("%d",&n);
	// printf("%d\n",n);

	int count = 0;
	while (n && n % 2 == 0)
	{
		n = n / 2;
		// printf("n=%d\n", n);
		count++;
	}
	printf("%d\n", count);
	return (0);
}
