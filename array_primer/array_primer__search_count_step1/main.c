#include <stdio.h>
int	main(void)
{
	int	n[11] = {1, 2, 2, 1, 2, 1, 2, 1, 1, 1};
	int count = 0;
	for (int i = 0; i < 11; i++)
	{
		if(n[i] == 1){
			count++;
		}
	}
	printf("%d\n",count);
	return (0);
}
