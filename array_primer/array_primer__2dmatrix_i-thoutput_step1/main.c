#include <stdio.h>
int	main(void)
{
	int	a[4][4] = {
		{1, 2, 3, 4},
		{10, 100, 0, 5},
		{8, 1, 3, 8},
		{15, 34, 94, 25}
	};
	int K;
	int L;
	scanf("%d%d", &K,&L);
	// printf("%d %d\n",K,L);
	printf("%d\n", a[K - 1][L - 1]);

	return (0);
}
