#include <stdio.h>
int	main(void)
{
	int	n;

	scanf("%d",&n);
	// printf("%d\n",n);
#include <stdio.h>
int	main(void)
{
	int	n;

	scanf("%d",&n);
	// printf("%d\n",n);

	int a[n];
// 	for (int i = 1; i <= n; i++)しておかないと
// 次のfor文でメモリ確保していない値が出力される。
	for (int i = 1; i <= n; i++)
	{
		scanf("%d",&a[i]);
// 		printf("%d\n",a[i]);
	}

	for (int i = n; i >= 1 ; i--)
	{
		printf("%d\n",a[i]);
	}
	return (0);
}

	int a[n];
	for (int i = n; i > 0; i--)
	{
		scanf("%d",&a[i]);
		printf("%d\n",a[i]);
	}
	return (0);
}
