#include <stdio.h>

int	main(void)
{

	int	N;

	scanf("%d",&N);
	// printf("%d\n",N);

	int a[N];
	for (int i = 1; i <= N; i++)
	{
		scanf("%d",&a[i]);
		// printf("%d ",a[i]);
	}
	int i;
	for (i = 1; i <= N; i++)
	{
		if(a[i] == 1){
			break;
		}
	}
	printf("%d\n", i);
	return (0);
}
