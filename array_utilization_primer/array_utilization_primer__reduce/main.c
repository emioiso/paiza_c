#include <stdio.h>
int	main(void)
{
	int	n;

	scanf("%d",&n);
// 	printf("%d\n",n);
	int a[n];
	int ans = 0;
	for (int i = 0; i < n; i++)
	{
		scanf("%d",&a[i]);
// 		printf("a[%d] = %d\n",i,a[i]);
	}

    for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i - 1; j++)
		{
		  //  printf("a[%d] a[%d]\n",i,j);
			ans = a[i] * a[j];
// 			printf("a[%d] * a[%d]\n",a[i],a[j]);
// 			printf("ans = %d\n",ans);
			printf("%d\n",ans);
		}
	}
	return (0);
}
