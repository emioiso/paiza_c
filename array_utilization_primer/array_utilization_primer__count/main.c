#include <stdio.h>
int	main(void)
{
	int	n,k;

	scanf("%d%d",&n,&k);
// 	printf("%d %d\n",n,k);

	int a[n];
	int count = 0;
	for (int i = 0; i < n; i++)
	{
		scanf("%d",&a[i]);
// 		printf("%d",a[i]);
		if(a[i] == k){
		    count++;
		}
	}
    printf("%d",count);
	return (0);
}
