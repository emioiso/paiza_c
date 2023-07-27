#include <stdio.h>
#include <stdbool.h>

int	main(void)
{
	int	n,k;

	scanf("%d%d",&n,&k);
// 	printf("%d %d\n",n,k);

	int a[n];
	bool flag = false;
	for (int i = 0; i < n; i++)
	{
		scanf("%d",&a[i]);
// 		printf("a[%d] = %d\n",i,a[i]);
		if(a[i] == k){
			flag = true;
// 			printf("flag = %d\n",flag);
		}
	}
	if(flag == true){
		printf("Yes\n");
	} else {
		printf("No\n");
	}
	return (0);
}
