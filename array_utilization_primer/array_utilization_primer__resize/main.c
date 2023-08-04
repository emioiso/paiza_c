#include <stdio.h>
int	main(void)
{
	int	N,n;

	scanf("%d%d",&N,&n);
// 	printf("%d %d\n",N,n);
	int	a[N];
	int	count = 0;
	for (int i = 1; i <= N; i++)
	{
		scanf("%d",&a[i]);
		count++;
// 		printf("%d %d\n",a[i],count);

	}
	int ans[101];
	for (int i = 1; i <= n; i++)
	{
		if(i > count){
			ans[i] = 0;
			printf("%d\n", ans[i]);
		} else {
			ans[i] = a[i];
			printf("%d\n", ans[i]);
		}
	}
	return (0);
}
