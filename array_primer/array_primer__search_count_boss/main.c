#include <stdio.h>
int	main(void)
{
	int	n,m;

	scanf("%d%d",&n,&m);
// 	printf("%d %d\n",n,m);

	int a[m];
	int count = 0;
	for (int i = 0; i < m; i++)
	{
		scanf("%d",&a[i]);
		// printf("%d\n",a[i]);
		if(n == a[i]){
			count++;
		}
	}
	printf("%d\n", count);
	return (0);
}
