#include <stdio.h>
int	main(void)
{
	int	n,m;

	scanf("%d%d",&n,&m);

	int a[n];
	for (int i = 0; i < n; i++)
	{
		scanf("%d",&a[i]);
		if(i == n){
			printf("%d\n", m);
		} else {
			printf("%d\n", a[i]);
		}
	}

	return (0);
}
