#include <stdio.h>
int	main(void)
{
	int	n,m;

	scanf("%d%d",&n,&m);
	// printf("%d %d\n",n,m);

	int a[n];
	int count = 0;
	for (int i = 0; i < n; i++)
	{
		scanf("%d",&a[i]);
		// printf("%d",a[i]);
		if(a[i] == m){
			count++;
		}
	}
	printf("%d\n", count);
	return (0);
}
