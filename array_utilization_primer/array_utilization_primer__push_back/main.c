#include <stdio.h>
int	main(void)
{
	int	n;

	scanf("%d",&n);
// 	printf("%d\n",n);

	int  a[n];
	for (int i = 0; i < n; i++)
	{
		scanf("%d",&a[i]);
	}
	int b;
	scanf("%d",&b);


	for (int i = 0; i < n; i++)
	{
		printf("%d\n",a[i]);
	}
	printf("%d\n",b);
	return (0);
}
