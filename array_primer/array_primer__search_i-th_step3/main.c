#include <stdio.h>
int	main(void)
{
	int	n,m;

	scanf("%d%d",&n,&m);
	// printf("%d %d\n",n,m);

	int a[m];
	for (int i = 0; i < m; i++)
	{
		scanf("%d",&a[i]);
		// printf("%d",a[i]);
		if(n == a[i]){
			printf("%d\n", i + 1);
		}
	}
	return (0);
}
