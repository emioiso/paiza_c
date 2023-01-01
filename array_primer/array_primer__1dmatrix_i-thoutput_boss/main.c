#include <stdio.h>

int	main(void)
{

	int	n;//aの文字数
	int	k;//k番目の文字数

	scanf("%d%d",&n,&k);
	// printf("%d %d\n",n,k);

	int a;
	for (int i = 0; i < k; i++)
	{
		scanf("%d",&a);
		// printf("%d\n", a);
	}
	printf("%d\n", a);

	return (0);
}
