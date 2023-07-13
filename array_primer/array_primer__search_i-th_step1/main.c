#include <stdio.h>
int	main(void)
{

	int	n[11] = {1, 10, 2, 9, 3, 8, 4, 7, 5, 6};

	for (int i = 0; i < 10; i++){
		if(n[i] == 8){
			// 添字は0から始まるから+1する必要がある。
			printf("%d\n", i + 1);
		}
	}
	return (0);
}
