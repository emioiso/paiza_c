#include <stdio.h>
int	main(void)
{
	int	n;
	int	m;

	scanf("%d%d",&n,&m);
	// printf("%d %d\n",n,m);

	int a[101];
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
		// printf("%d", a[i]);
		if(a[i] == m){
			printf("Yes\n");
			return (0);
		}
	}
	printf("No\n");
	return (0);
}
