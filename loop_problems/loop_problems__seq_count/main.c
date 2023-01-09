#include <stdio.h>

int	main(void)
{
	int	N;

	scanf("%d",&N);
	// printf("%d\n",N);

	int a[N];
	int sum = 0;
	for (int i = 0; i < N; i++)
	{
		scanf("%d",&a[i]);
		// printf("%d ",a[i]);

		if(a[i] == 1){
			sum++;
		}
	}
	printf("%d\n", sum);
	return (0);
}
