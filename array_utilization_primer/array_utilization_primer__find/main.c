#include <stdio.h>
#include <stdbool.h>

int	main(void)
{
	int	n,k;

	scanf("%d%d",&n,&k);
// 	printf("%d %d\n",n,k);

	int a[n];
	for (int i = 0; i < n; i++)
	{
		scanf("%d",&a[i]);
// 		printf("%d\n",a[i]);
	}
    bool flag = false;
	for (int i = 0 ; i < n ; i++)
	{
// 		printf("%d ", a[i]);
		if(a[i] == k){
		    printf("%d\n", i + 1);
		    flag = true;
		    break;
		}
	}
    if(flag == false){
        printf("-1\n");
    }
	return (0);
}
