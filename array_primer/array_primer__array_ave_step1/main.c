#include <stdio.h>
int	main(void)
{
	int	n;

	scanf("%d",&n);
	// printf("%d\n",n);
	int sum[n];
	for (int i = 0; i < n; i++)
	{
		scanf("%d",&sum[i]);
// 		printf("%d",sum[i]);
		if(sum[i] >= 5){
			printf("%d\n",sum[i]);
		}
	}
	return (0);
}
