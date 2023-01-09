#include <stdio.h>

int	main(void)
{

	int	n = 8;

	// printf("%d ",n * 1);
	// printf("%d ",n * 2);
	// printf("%d ",n * 3);
	// printf("%d ",n * 4);
	// printf("%d ",n * 5);
	// printf("%d ",n * 6);
	// printf("%d ",n * 7);
	// printf("%d ",n * 8);
	// printf("%d\n",n * 9);

	for (int i = 1; i <= 9; i++)
	{
		// printf("%d ", i * 8);
		if(i == 9){
			printf("%d\n",i * 8);
		} else {
			printf("%d ", i * 8);
		}
	}
	return (0);
}


// #include <stdio.h>

// int	main(void)
// {

// 	int	q = 72;

// 	scanf("%d",&q);
// 	// printf("%d\n",q);

// 	for (int i = 8; i <= q; i+=8)
// 	{
// 		printf("%d ", i);
// 	}
// 	printf("\n");
// 	return (0);
// }
