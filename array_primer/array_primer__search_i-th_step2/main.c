#include <stdio.h>
int	main(void)
{
	int	n;

	scanf("%d",&n);
	// printf("%d\n",n);

	int array[11] = {1, 5, 9, 7, 3, 2, 4, 8, 6, 10};
	for (int i = 0; array[i] != '\0'; i++){
		if(array[i] == n){
			printf("%d\n", i + 1);
		}
	}
	return (0);
}
