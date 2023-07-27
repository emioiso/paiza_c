#include <stdio.h>
#include <stdbool.h>

int	main(void)
{
	int	n;

	scanf("%d",&n);
// 	printf("%d\n",n);
	int a[n];
	for (int i = 0; i < n; i++)
	{
		scanf("%d",&a[i]);
// 		printf("%d\n",a[i]);
	}
	bool flag = false;
	int count = 1;
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
        // printf("%d ", a[i]);
//
	}
    // printf("\n");
    	for (int i = 0; i < n - 1; i++)
	{
        // printf("%d ", a[i]);
// 		printf("a[%d] = %d a[%d] = %d\n",i, a[i],i + 1,a[i + 1]);
		if(a[i] != a[i + 1]){
		    flag = true;
		  //  printf("flag = %d",flag);
		    count++;
	       // printf("count = %d\n",count);
		    flag = false;
		}
	}
    printf("%d",count);
	return (0);
}
