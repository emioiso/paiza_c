#include <stdio.h>

int	main(void)
{
	int	N;

	scanf("%d",&N);
	// printf("%d\n",N);

	int a[N];
	for (int i = 0; i < N; i++)
	{
		scanf("%d",&a[i]);
		// printf("%d ",a[i]);
	}
	int min = a[0];
	for (int i = 0; i < N; i++)
	{
		if(min > a[i]){
			min = a[i];
		}
	}
	printf("%d\n",min);
	return (0);
}
