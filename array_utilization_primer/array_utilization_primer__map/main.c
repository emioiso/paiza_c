#include <stdio.h>
int	main(void)
{
	int	n,k;

	scanf("%d%d",&n,&k);
// 	printf("%d %d\n",n,k);

	int	a[n];
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		scanf("%d",&a[i]);
// 		printf("%d",a[i]);
		sum = k + a[i];
		printf("%d\n",sum);
	}

	return (0);
}
