#include <stdio.h>
int	main(void)
{
	int	A,B,N;

	scanf("%d%d%d",&A,&B,&N);
	printf("%d %d %d\n",A,B,N);

	int a[N];
	int newA[N];
	for (int i = 0; i < n; i++)
	{
		scanf("%d",&a[i]);
		if (a[i] == A){
			newA[i] = B;
			printf("%d\n", newA[i]);
		} else if (a[i] == B){
			newA[i] = A;
			printf("%d\n", newA[i]);
		} else {
			newA[i] = a[i];
			printf("%d\n", newA[i]);
		}
	}
	return (0);
}
