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
		// printf("%d\n",a[i]);
		if(i != m - 1){
			printf("%d\n", a[i]);
		}
	}
	return (0);
}
