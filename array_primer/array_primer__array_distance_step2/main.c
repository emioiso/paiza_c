#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	int	n,a,b;

	scanf("%d%d%d",&n,&a,&b);
// 	printf("%d %d %d\n",n,a,b);

	int x[n + 1], y[n + 1];
	int tmpX = 0;
	int tmpY = 0;
	int sum = 0;
	for (int i = 1; i <= n; i++)
	{
		scanf("%d%d",&x[i],&y[i]);
// 		printf("x[%d] = %d y[%d] = %d\n",i,x[i],i,y[i]);

		tmpX = abs(x[a] - x[b]);
// 		printf("tmpX = %d\n", tmpX);
        tmpY = abs(y[a] - y[b]);
        sum = tmpX + tmpY;
        // printf("sum = %d\n", sum);
	}
// 	printf("sum = %d\n", sum);
	printf("%d\n", sum);
	return (0);
}
