#include <stdio.h>

int	main(void)
{

	int	n;

	scanf("%d",&n);
	// printf("%d\n",n);

	int box = 0;
	for (int i = 0; i < n; i++)
	{
		int a;
		scanf("%d",&a);
		// printf("%d\n", a);
		box += a;
		// printf("%d\n", box);
	}
	printf("%d\n", box);
	return (0);
}
