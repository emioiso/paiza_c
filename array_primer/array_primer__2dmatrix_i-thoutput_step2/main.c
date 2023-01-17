#include <stdio.h>
int	main(void)
{
	int	k;
	int	l;

	scanf("%d%d",&k,&l);
	// printf("%d %d\n",k,l);

	int a[101][101];
	int i;
	int j;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			scanf("%d",&a[i][j]);
			// printf("%d", a[i][j]);
			if(j < 2){
				// printf(" ");
			}
		}
		// printf("\n");
	}
	printf("%d\n", a[k - 1][l - 1]);
	return (0);
}
