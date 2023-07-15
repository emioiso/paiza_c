#include <stdio.h>
int	main(void)
{
	int	n,m;

	scanf("%d%d",&n,&m);
// 	printf("%d %d\n",n,m);

	int a[n];
	for (int i = 0; i < n; i++)
	{
		scanf("%d",&a[i]);
		// printf("%d ",a[i]);
		printf("%d\n",a[i]);
	}
	// printf("\n");
	int b[m];
	for (int i = 0; i < m; i++)
	{
		scanf("%d",&b[i]);
		// printf("%d ",b[i]);
		printf("%d\n",b[i]);
	}
	return (0);
}
