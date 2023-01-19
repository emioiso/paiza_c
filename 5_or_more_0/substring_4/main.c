#include <stdio.h>
int	main(void)
{
	int	a,b;

	scanf("%d%d",&a,&b);
	// printf("%d %d\n",a,b);

	for (int i = a; i <= b; i++)
	{
		printf("%d\n", i);
	}
	return (0);
}
