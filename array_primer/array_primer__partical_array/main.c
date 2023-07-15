#include <stdio.h>
int	main(void)
{
	int	A,B,N;

	scanf("%d%d%d",&A,&B,&N);
// 	printf("%d %d %d\n",A,B,N);

	int a[N];
	int newA[N];
	for (int i = 1; i <= N; i++)
	{
		scanf("%d",&a[i]);
// 		printf("%d\n",a[i]);
// 		printf("%d\n",i);
		if(i >= A && i <= B){
			newA[i] = a[i];
			printf("%d\n", newA[i]);
		}
	}
	return (0);
}
