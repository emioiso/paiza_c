#include <stdio.h>
int	main(void)
{
	int	n;

	scanf("%d",&n);
	// printf("%d\n",n);

	int a[n];
	for (int i = 1; i < n; i++)
	{
		scanf("%d",&a[i]);
		// printf("%d",a[i]);
	}
    for (int i = n; i > 0; i--)
	{
		scanf("%d",&a[i]);
		printf("%d\n",a[i]);
	}
	return (0);
}
