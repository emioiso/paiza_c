#include <stdio.h>
int	main(void)
{
	int	N;

	scanf("%d",&N);
// 	printf("%d\n",N);

	int a[N];
	for (int i = 0; i < N; i++)
	{
		scanf("%d",&a[i]);
// 		printf("%d\n",a[i]);
	}

	int	n,B;
	int newN[N];
	scanf("%d%d", &n, &B);
// 	printf("%d %d\n",n,B);

	for (int i = 0; i < N; i++)
	{
		if(i == n - 1){
			newN[i] = a[i];
			printf("%d\n",newN[i]);
			newN[i] = B;
			printf("%d\n",newN[i]);
		} else {
		    newN[i] = a[i];
			printf("%d\n",newN[i]);
		}
	}
	return (0);
}
