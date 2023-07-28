#include <stdio.h>
int	main(void)
{
	int	n;

	scanf("%d",&n);
// 	printf("%d\n",n);
	int a[n];
	for (int i = 0; i < n; i++)
	{
		scanf("%d",&a[i]);
// 		printf("%d\n",a[i]);
	}
	for (int i = n - 1; i >= 0; i--)
	{
		printf("%d\n",a[i]);
	}

	return (0);
}
