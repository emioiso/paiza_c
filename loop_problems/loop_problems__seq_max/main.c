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
		// printf("a[i]=%d\n",a[i]);
	}
		int compare = a[0];
		for (int i = 0; i < N; i++)
		{
			if(compare < a[i]){
				compare = a[i];
			}
		}
	printf("%d\n",compare);
	return (0);
}
