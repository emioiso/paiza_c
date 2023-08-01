#include <stdio.h>
int	main(void)
{
	int	n;

	scanf("%d",&n);
// 	printf("%d\n",n);

	int a[n];
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		scanf("%d",&a[i]);
// 		printf("%d\n",a[i]);
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i - 1; j++)
		{
			sum = a[i] * a[j];
			printf("%d\n", sum);
		}
	}

	return (0);
}
