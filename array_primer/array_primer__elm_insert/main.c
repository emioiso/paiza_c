#include <stdio.h>
int	main(void)
{
	int	n,m,k;

	scanf("%d%d%d",&n,&m,&k);
	// printf("%d %d %d\n",n,m,k);

	int a[n];
	for (int i = 0; i < n; i++)
	{
		scanf("%d",&a[i]);
		// printf("%d",a[i]);
		if(i == m - 1){
			printf("%d\n%d\n", k,a[i]);
		} else {
			printf("%d\n", a[i]);
		}
	}
	return (0);
}
