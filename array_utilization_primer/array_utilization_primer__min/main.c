#include <stdio.h>

int	main(void)
{
	int	n;

	scanf("%d",&n);
	// printf("%d\n",n);
	int a[n];
	for (int i = 0; i < n; i++)
	{
		scanf("%d",&a[i]);
// 		printf("%d",a[i]);
	}
	int tmp = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (a[i] > a[j])
			{
				tmp = a[i];
				a[i] = a[j];
				a[j] = tmp;
			}
		}
	}
	for (int i = 0; i < n; i++)
	{
// 		printf("%d ", a[i]);
		if(i == 0){
		    printf("%d\n", a[0]);
		}
	}
	return (0);
}
