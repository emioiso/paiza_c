#include <stdio.h>
int	main(void)
{
	int	array[11] = {1, 2, 5, 1, 4, 3, 2, 5, 1, 4};

	int n;
	scanf("%d", &n);
	printf("%d\n",n);

	int count = 0;
	for (int i = 0; i < 11; i++)
	{
		if(n == array[i]){
			count++;
		}
	}
	printf("%d\n", count);
	return (0);
}
