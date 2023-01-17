#include <stdio.h>
int	main(void)
{
	int	n,m,k,l;

	scanf("%d%d%d%d",&n,&m,&k,&l);
	// printf("%d %d %d %d\n",n,m,k,l);

	int a[101][101];
	int i;
	int j;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			scanf("%d",&a[i][j]);
			// printf("%d",a[i][j]);
			if(a[i][j] > a[i][m - 1]){
				// printf(" ");
			}
		}
		// printf("\n");
	}
	printf("%d\n",a[k - 1][l - 1]) ;
	return (0);
}
