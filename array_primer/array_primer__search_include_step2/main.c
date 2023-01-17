#include <stdio.h>
int	main(void)
{
	int	a[11] = {5, 12, 6, 84, 14, 25, 44, 3, 7, 20};
	int n;

	scanf("%d", &n);
	// printf("n=%d\n",n);

	for (int i = 0; i < 10; i++)
	{
		// printf("a[i]=%d\n", a[i]);
		if(a[i] == n){
			printf("Yes\n");
			return (0);//ここのリターンがわからなかった。
		}
	}
	printf("No\n");
	return (0);
}

// #include <stdio.h>
// int	main(void)
// {
// 	int	a[11] = {5, 12, 6, 84, 14, 25, 44, 3, 7, 20};
// 	int n;

// 	scanf("%d", &n);
// 	// printf("n=%d\n",n);

// 	int count = 0;
// 	for (int i = 0; i < 10; i++)
// 	{
// 		// printf("a[i]=%d\n", a[i]);
// 		if(a[i] == n){
// 			count++;
// 		}
// 	}
// 	if(count > 0){
// 		printf("Yes\n");
// 	} else {
// 		printf("No\n");
// 	}
// 	return (0);
// }
