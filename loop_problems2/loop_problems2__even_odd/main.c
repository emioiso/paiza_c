#include <stdio.h>

int	main(void)
{

	int	n;

	scanf("%d",&n);
	// printf("%d\n",n);

	for (int i = 0; i < n; i++)
	{
		int a;
		scanf("%d",&a);
		// printf("%d ",a);

		if(a % 2 == 0){
			printf("even\n");
		} else {
			printf("odd\n");
		}
	}
	return (0);
}
