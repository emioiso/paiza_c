#include <stdio.h>
int	main(void)
{
	int	n,m;

	scanf("%d%d",&n,&m);

	int a[n];
	for (int i = 0; i < n; i++)
	{
		scanf("%d",&a[i]);
		printf("%d\n",a[i]);
// 		printf("i = %d\n",i);
// 		printf("n = %d\n",n);
	}
	printf("%d\n",m);
	return (0);
}
