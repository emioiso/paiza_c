#include <stdio.h>
int	main(void)
{
	int	n;
	int	m;

	scanf("%d%d",&n,&m);
	// printf("%d %d\n",n,m);

	int a[101][101];
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			scanf("%d",&a[i][j]);
			printf("%d",a[i][j]);
			if(j < m - 1){		//この条件分岐の仕組みを理解していなかった。
				printf(" ");
			}
		}
		printf("\n");
	}
	return (0);
}
