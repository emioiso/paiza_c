#include <stdio.h>

int	main(void)
{
	int	m;

	scanf("%d",&m);
	// printf("%d\n",m);

	int a[101][101];
	int i;
	for (i = 0; i < m; i++)
	{
		scanf("%d",&a[i][0]);
		printf("%d", a[i][0]);
		if(i < m - 1){
			printf(" ");
		}
	}
	printf("\n");

	for (i = 0; i < m; i++)
	{
		scanf("%d",&a[i][1]);
		printf("%d", a[i][1]);
		if(i < m - 1){
			printf(" ");
		}
	}
	printf("\n");

	for (i = 0; i < m; i++)
	{
		scanf("%d",&a[i][2]);
		printf("%d", a[i][2]);
		if(i < m - 1){
			printf(" ");
		}
	}
	printf("\n");

	for (i = 0; i < m; i++)
	{
		scanf("%d",&a[i][3]);
		printf("%d", a[i][3]);
		if(i < m - 1){
			printf(" ");
		}
	}
	printf("\n");

	for (i = 0; i < m; i++)
	{
		scanf("%d",&a[i][3]);
		printf("%d", a[i][3]);
		if(i < m - 1){
			printf(" ");
		}
	}
	printf("\n");

	return (0);
}
