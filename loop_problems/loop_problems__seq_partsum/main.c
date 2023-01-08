#include <stdio.h>

int	main(void)
{

	int	n;
	int	A;
	int	b;

	scanf("%d%d%d",&n,&A,&b);
	// printf("%d %d %d\n",n,A,b);

	int sum = 0;
	for (int i = 1; i <= n; i++)
	{
		int a;
		scanf("%d",&a);
		// printf("i=%d a=%d\n", i,a);
		if(A <= i && i <= b){
			// printf("i=%d\n", i);
			// printf("i=%d a=%d\n", i,a);
			sum += a;
		}
		// printf("sum=%d\n",sum);
	}
	printf("%d\n",sum);
	return (0);
}
