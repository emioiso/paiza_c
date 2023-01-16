#include <stdio.h>
int	main(void)
{
	int	n;

	// scanf("%d",&n);
	printf("%d\n",n);

	int a[n][5];
	int j;
	for (int i = 0; i < n; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if(j >= 1){
				printf(" ");
			}
			scanf("%d",&a[i][j]);
			printf("%d", a[i][j]);
		}
		printf("\n");
	}
	return (0);
}
