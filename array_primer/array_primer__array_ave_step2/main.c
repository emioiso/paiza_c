#include <stdio.h>
int	main(void)
{
	int	n,k;

	scanf("%d%d",&n,&k);
	// printf("%d %d\n",n,k);
	int sum[n];
	for (int i = 0; i < n; i++)
	{
		scanf("%d",&sum[i]);
// 		printf("%d",sum[i]);
		if(sum[i] >= k){
			printf("%d\n",sum[i]);
		}
	}
	return (0);
}
